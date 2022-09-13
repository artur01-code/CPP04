#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& obj);
	Animal& operator=(const Animal& obj);
	virtual ~Animal();

	protected:
	std::string _type;

	public:
	std::string getType(void) const;
	virtual void makeSound(void) const;
};

#endif