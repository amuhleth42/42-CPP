#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	virtual ~MateriaSource(void);
	
	virtual void		learnMateria(AMateria* p);
	virtual AMateria*	createMateria(std::string const & type);

	MateriaSource&	operator=(MateriaSource const & rhs);

private:

	AMateria*	_tab[4];
};


#endif
