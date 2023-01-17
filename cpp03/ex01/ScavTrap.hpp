#ifndef SCAV_TRAP
# define SCAV_TRAP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap& src);
	~ScavTrap(void);

	void	guardGate(void);

	ScavTrap&	operator=(ScavTrap const & rhs);
		

private:

};

#endif
