#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	/*MateriaSource*	s = new MateriaSource();
	s->learnMateria(new Cure());
	s->learnMateria(new Ice());
	s->learnMateria(new Cure());
	Character*	p1 = new Character("yo");
	p1->equip(s->createMateria("cure"));

	Character*	p2 = new Character("hey");
	p2->equip(s->createMateria("ice"));
	p2->equip(s->createMateria("ice"));
	p2->equip(s->createMateria("ice"));
	*p1 = *p2;

	p1->use(0, *p2);
	p1->use(1, *p2);
	p1->use(2, *p2);
	p1->use(3, *p2);

	delete s;
	delete p1;
	delete p2;*/

	return 0;
}
