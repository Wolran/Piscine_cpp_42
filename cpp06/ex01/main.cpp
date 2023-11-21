#include "Serializer.hpp"

int	main()
{
	Data data;
	data.i = 42;
	data.s = "fourty two";
	data.d = 42.42;

	uintptr_t ptr = Serializer::serialize(&data);
	Data* result = Serializer::deserialize(ptr);

	std::cout << "Original data: " << &data << ", " << data.i << ", " << data.s << ", " << data.d << std::endl;
	std::cout << "Serialized pointer: " << ptr << std::endl;
	std::cout << "Deserialized data: " << result << ", " << result->i << ", " << result->s << ", " << result->d << std::endl;

	if (&data == result)

	return 0;
}
