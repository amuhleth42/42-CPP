#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

public:
	Cure(void);
	Cure(Cure const & src);
	Cure(std::string const & type);
	~Cure(void);

	virtual Cure*	clone() const;
	virtual void	use(ICharacter& target);

	Cure&	operator=(Cure const & rhs);


private:

};

#endif
