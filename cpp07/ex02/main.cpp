#include "Array.hpp"

int main( void )
{
	Array <int>array(20);
	Array <std::string>arrayString(5);

	for (int i = 0; i < 20; i++)
	{
		array[i] = i;
		std::cout << array[i] << std::endl;
	}
	arrayString[0] = "I";
	arrayString[1] = "AM";
	arrayString[2] = "TOM";
	arrayString[3] = "PLATZ";
	arrayString[4] = "(work in progress)";
	for (int i = 0; i < 6; i++)
	{
		try
		{
			std::cout << arrayString[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
