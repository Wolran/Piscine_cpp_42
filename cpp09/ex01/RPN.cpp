#include "RPN.hpp"

static inline int __stack_pop(std::stack<int> &stack)
{
	int stacking = 0;
	stacking = stack.top();
	stack.pop();
	return stacking;
}

int Evaluate_RPN(std::string str, int *r)
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
			stack.push(__stack_pop(stack) + __stack_pop(stack));
			i++;
			full--;
		}
		else if (str[i] == '-' && full >= 2)
		{
			int zero = __stack_pop(stack);
			stack.push(__stack_pop(stack) - zero);
			i++;
			full--;
		}
		else if (str[i] == '*' && full >= 2)
		{
			stack.push(__stack_pop(stack) * __stack_pop(stack));
			i++;
			full--;
		}
		else if (str[i] == '/' && full >= 2)
		{
			int zero = __stack_pop(stack);
			if (zero == 0)
			{
				std::cout << "Division by zero" << std::endl;
				while(!stack.size())
					stack.pop();
				return(*r = 1);
			}
			stack.push(__stack_pop(stack) / zero);
			i++;
			full--;
		}
		else
		{
			std::cout << "Error" << std::endl;
			while(!stack.size())
				stack.pop();
			return(*r = 1);
		}
	}
	if (full != 1)
	{
		std::cout << "Error" << std::endl;
		while(!stack.size())
				stack.pop();
		return(*r = 1);
	}
	return __stack_pop(stack);
}