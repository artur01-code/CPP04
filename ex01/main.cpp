#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		Dog fluffy;
		fluffy.setIdea("Food", 0);
		std::cout << "Idea[0]: " << fluffy.getIdea(0) << std::endl;
	}
	std::cout << std::string(50, '-') << std::endl;
	{
		Cat miez;
		std::cout << "Idea[0]: " << miez.getIdea(0) << std::endl;
		miez.setIdea("Food", 0);
		std::cout << "Idea set" << std::endl;
		std::cout << "Idea[0]: " << miez.getIdea(0) << std::endl;
	}
	std::cout << std::string(50, '-') << std::endl;
	{
		std::cout << "Animal array" << std::endl << std::endl;

		const Animal* zoo[10];
		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
				zoo[i] = new Dog();
			else
				zoo[i] = new Cat();
		}
		for (int i = 0; i < 10; i++)
			delete zoo[i];

		std::cout << std::endl << std::string(50, '-') << std::endl << std::endl;
		std::cout << "checking for deep copies" << std::endl << std::endl;

		Dog *Brutus = new Dog();
		Dog *Fluffy = new Dog();

		Fluffy->setIdea("fooooood", 0);
		std::cout << "Fluffys Idea[0]: " << Fluffy->getIdea(0) << std::endl;
		std::cout << "Brutus Idea[0]: " << Brutus->getIdea(0) << std::endl;
		std::cout << std::string(10, '-') << std::endl;
		Brutus = Fluffy;
		std::cout << "Fluffys Idea[0]: " <<  Fluffy->getIdea(0) << std::endl;
		std::cout << "Brutus Idea[0]: " << Brutus->getIdea(0) << std::endl;

		std::cout << "Fluffys brain is here: " << (Fluffy->getBrain()) << std::endl;
		std::cout << "Brutus' brain is here: " << (Brutus->getBrain()) << std::endl;
	}
	return (0);
}