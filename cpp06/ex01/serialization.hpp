#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>

struct	Data {
	int	a;
	int	b;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
