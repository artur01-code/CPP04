#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog& rhs)
{
	*this = rhs;
	std::cout << "Dog copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog copy assigment operator" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog default destructor" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "WAAAUUUU..." << std::endl;
}