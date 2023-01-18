#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:
	Ice(void);
	Ice(Ice const & src);
	Ice(std::string const & type);
	~Ice(void);

	virtual Ice*	clone() const;
	virtual void	use(ICharacter& target);

	Ice&	operator=(Ice const & rhs);


private:

};

#endif
