#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class	Brain {

public:

	Brain(void);
	Brain(Brain const & src);
	~Brain(void);

	Brain&	operator=(Brain const & rhs);


protected:

	std::string	ideas[100];

};

#endif
