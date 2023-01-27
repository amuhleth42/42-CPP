#include "serialization.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	Data 	a;
	Data*	p;

	p = deserialize(serialize(&a));
	std::cout << "a: " << &a << std::endl;
	std::cout << "p: " << p << std::endl;
	return (0);
}
