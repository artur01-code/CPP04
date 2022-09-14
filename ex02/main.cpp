#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"
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
		//uncomment for demonstrating that it is an abstract class
		// AAnimal a = new AAnimal;
	}
	return (0);
}