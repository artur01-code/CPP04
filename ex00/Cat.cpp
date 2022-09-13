#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat& rhs)
{
	*this = rhs;
	std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat copy assigment operator" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat default destructor" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "MEEEOOOOW..." << std::endl;
}