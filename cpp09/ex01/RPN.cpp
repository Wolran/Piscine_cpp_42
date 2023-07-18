#include "RPN.hpp"

static int _stack_pop(std::stack<int> &stack)
{
	int stacking = 0;
	stacking = stack.top();
	stack.pop();
	return stacking;
}

int Evaluate_RPN(std::string str)
{
	std::stack<int> stack;
	int i = 0;
	int full = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			stack.push(str[i++] - '0');
			full++;
		}
		else if (str[i] == '+' && full >= 2)
		{
			stack.push(_stack_pop(stack) + _stack_pop(stack));
			i++;
			full--;
		}
		else if (str[i] == '-' && full >= 2)
		{
			stack.push(_stack_pop(stack) - _stack_pop(stack));
			i++;
			full--;
		}
		else if (str[i] == '*' && full >= 2)
		{
			stack.push(_stack_pop(stack) * _stack_pop(stack));
			i++;
			full--;
		}
		else if (str[i] == '/' && full >= 2)
		{
			int zero = _stack_pop(stack);
			if (zero == 0)
			{
				std::cout << "Division by zero" << std::endl;
				exit(1);
			}
			stack.push(_stack_pop(stack) / zero);
			i++;
			full--;
		}
		else
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
	}
	if (full != 1)
	{
		std::cout << "Error" << std::endl;
		exit(1);
	}
	return _stack_pop(stack);
}