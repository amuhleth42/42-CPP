#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	/*const Animal*	j = new Dog();
	const Animal*	i = new Cat();


	delete j;
	delete i;
	return (0);*/

	Animal*	ptr_tab[8];

	for (int i = 0 ; i < 4 ; i++)
		ptr_tab[i] = new Dog();

	std::cout << std::endl;

	for (int i = 4 ; i < 8 ; i++)
		ptr_tab[i] = new Cat();

	std::cout << std::endl;

	for (int i = 0; i < 8 ; i++)
		ptr_tab[i]->makeSound();
	
	std::cout << std::endl;

	for (int i = 0; i < 8 ; i++)
		delete ptr_tab[i];
	
	std::cout << std::endl;

	//Should not compile !
	Animal	test = Animal();
	test.makeSound();

	return (0);
}
