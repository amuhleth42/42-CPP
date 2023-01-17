#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {

public:

	DiamondTrap(void);
	DiamondTrap(std::string const & name);
	DiamondTrap(DiamondTrap& src);
	~DiamondTrap(void);

	void	whoAmI(void);

	DiamondTrap&	operator=(DiamondTrap const & rhs);

private:

	std::string	_name;

};

#endif
