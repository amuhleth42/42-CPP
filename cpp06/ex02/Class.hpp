#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>
# include <stdlib.h>

class	Base {

public:
	virtual ~Base(void);
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);


#endif
