#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
	Cat(void);
	Cat(const Cat& rhs);
	Cat& operator=(const Cat& rhs);
	~Cat(void);

	private:
	Brain* _myBrain;

	public:
	virtual void makeSound(void) const;
	void setIdea(const std::string& idea, int i);
	std::string getIdea(int i) const;
	Brain *getBrain(void) const;
};

#endif