#include "RPN.hpp"

/* ceci est une ebauche car le code est immonde (mais fonctionnel) */

int main(int arc, char **arv)
{
	if (arc != 2){
		std::cout << "Usage: ./RPN <expression>" << std::endl;
		return 1;
	}

	int result = 0;
	int r = 0;
	std::string str = arv[1];

	result = Evaluate_RPN(str, &r);
	if (!r)
		std::cout << "Result : " << result << std::endl;

	return 1;
}