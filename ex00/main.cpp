#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		Animal unicorn;
		unicorn.makeSound();
		std::cout << unicorn.getType() << std::endl;
	}
	std::cout << std::string(50, '-') << std::endl;
	{
		Dog dog;
		dog.makeSound();
		dog.getType();
	}
	std::cout << std::string(50, '-') << std::endl;
	{
		Cat cat;
		cat.makeSound();
		cat.getType();
	}
	std::cout << std::string(50, '-') << std::endl;
	{
		Animal copycat = Cat();
	}
	std::cout << std::string(50, '-') << std::endl;
	{
		Animal* animal = new Animal();
		const Animal* dog = new Dog();
		Animal* cat = new Cat();
		std::cout << animal->getType() << std::endl;
		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		animal->makeSound();
		dog->makeSound();
		cat->makeSound();
		delete animal;
		delete cat;
		delete dog;
	}
	std::cout << std::string(50, '-') << std::endl;
	{
		WrongAnimal wrong;
		WrongCat felix;
		std::cout << wrong.getType() << std::endl;
		wrong.makeSound();
		std::cout << felix.getType() << std::endl;
		felix.makeSound();
	}

	return (0);
}