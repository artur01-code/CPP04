#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
	Cat(void);
	Cat(const Cat& rhs);
	Cat& operator=(const Cat& rhs);
	~Cat(void);

	virtual void makeSound(void) const;
};

#endif