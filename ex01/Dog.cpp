#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor" << std::endl;
	this->_type = "Dog";
	this->_myBrain = new Brain();
}

Dog::Dog(const Dog& rhs)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = rhs;
}

Dog& Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog copy assigment operator" << std::endl;
	this->_type = rhs._type;
	delete this->_myBrain;
	this->_myBrain = new Brain(*rhs._myBrain);
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog default destructor" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "BAAARRRRK..." << std::endl;
}

//calls the setIdea-function of it's brain
void Dog::setIdea(const std::string& idea, int i)
{
	this->_myBrain->setIdea(idea, i);
}

//calls the getIdea-function of it's brain
std::string Dog::getIdea(int i) const
{
	return (this->_myBrain->getIdea(i));
}

Brain* Dog::getBrain(void) const
{
	return (_myBrain);
}