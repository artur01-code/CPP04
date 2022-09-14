#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
	Dog(void);
	Dog(const Dog& rhs);
	Dog& operator=(const Dog& rhs);
	~Dog(void);

	private:
	Brain* _myBrain;

	public:
	virtual void makeSound(void) const;
	void setIdea(const std::string& idea, int i);
	std::string getIdea(int i) const;
	Brain *getBrain(void) const;

};

#endif