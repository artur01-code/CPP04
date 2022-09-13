#include "Animal.hpp"

Animal::Animal() : _type("default")
{
	std::cout << "Animal default constructor" << std::endl;
};

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << "Animal default constructor with name" << std::endl;
};

Animal::Animal(const Animal& obj)
{
	this->_type = obj._type;
	std::cout << "Animal copy constructor" << std::endl;
};

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
};

Animal& Animal::operator=(const Animal& obj)
{
	this->_type = obj._type;
	std::cout << "Animal copy assigment operator" << std::endl;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void Animal::makeSound(void) const
{
	std::cout << "What sound does an Animal make? °-° " << std::endl;
}