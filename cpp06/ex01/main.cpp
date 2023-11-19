#include <iostream>
#include <string>
#define uintptr_t unsigned long

struct Data {
	int i;
	std::string s;
	double d;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main()
{
	Data data;
	data.i = 42;
	data.s = "fourty two";
	data.d = 42.42;

	uintptr_t ptr = serialize(&data);
	Data* result = deserialize(ptr);

	std::cout << "Original data: " << &data << ", " << data.i << ", " << data.s << ", " << data.d << std::endl;
	std::cout << "Serialized pointer: " << ptr << std::endl;
	std::cout << "Deserialized data: " << result << ", " << result->i << ", " << result->s << ", " << result->d << std::endl;

	if (&data == result)

	return 0;
}
