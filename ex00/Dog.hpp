#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
	Dog(void);
	Dog(const Dog& rhs);
	Dog& operator=(const Dog& rhs);
	~Dog(void);

	virtual void makeSound(void) const;
};

#endif