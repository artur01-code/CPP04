#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal& obj);
	AAnimal& operator=(const AAnimal& obj);
	virtual ~AAnimal();

	protected:
	std::string _type;

	public:
	std::string getType(void) const;
	virtual void makeSound(void) const = 0;
};

#endif