#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("default")
{
	std::cout << "AAnimal default constructor" << std::endl;
};

AAnimal::AAnimal(std::string type)
{
	this->_type = type;
	std::cout << "AAnimal default constructor with name" << std::endl;
};

AAnimal::AAnimal(const AAnimal& obj)
{
	this->_type = obj._type;
	std::cout << "AAnimal copy constructor" << std::endl;
};

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor" << std::endl;
};

AAnimal& AAnimal::operator=(const AAnimal& obj)
{
	this->_type = obj._type;
	std::cout << "AAnimal copy assigment operator" << std::endl;
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}
