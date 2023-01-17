#ifndef FRAG_TRAP
# define FRAG_TRAP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {

public:

	FragTrap(void);
	FragTrap(std::string const & name);
	FragTrap(FragTrap& src);
	~FragTrap(void);

	void	highFivesGuys(void);
	void	attack(std::string const & target);

	FragTrap&	operator=(FragTrap const & rhs);


private:

};

#endif
