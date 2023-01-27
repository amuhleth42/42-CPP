#include "Class.hpp"

Base::~Base(void) {};

Base*	generate(void)
{
	int	n;

	srand(time(NULL));
	n = rand() % 3;
	switch (n)
	{
		case 0 :
			return (new A);
		case 1 :
			return (new B);
		case 2 :
			return (new C);
		default :
			return (nullptr);
	}
}

void	identify(Base* p)
{
	A*	a = nullptr;
	B*	b = nullptr;
	C*	c = nullptr;

	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);
	if (a != nullptr)
		std::cout << "Object pointed belongs to A" << std::endl;
	else if (b != nullptr)
		std::cout << "Object pointed belongs to B" << std::endl;
	else if (c != nullptr)
		std::cout << "Object pointed belongs to C" << std::endl;
}

void	identify(Base& p)
{
	A	a;
	B	b;
	C	c;

	try
	{
		a = dynamic_cast<A&>(p);
		std::cout << "Object referenced belongs to A" << std::endl;
	}
	catch (std::bad_cast) {}
	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << "Object referenced belongs to B" << std::endl;
	}
	catch (std::bad_cast) {}
	try
	{
		c = dynamic_cast<C&>(p);
		std::cout << "Object referenced belongs to C" << std::endl;
	}
	catch (std::bad_cast) {}
}

int	main(void)
{
	Base*	ptr = generate();
	identify(ptr);
	delete ptr;
	ptr = generate();
	identify(ptr);
	delete ptr;
	ptr = generate();
	identify(ptr);
	delete ptr;
	return (0);
}
