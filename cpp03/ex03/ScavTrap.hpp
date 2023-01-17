#ifndef SCAV_TRAP
# define SCAV_TRAP

# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap& src);
	~ScavTrap(void);

	void	guardGate(void);
	void	attack(std::string const & target);

	ScavTrap&	operator=(ScavTrap const & rhs);


private:

};

#endif
