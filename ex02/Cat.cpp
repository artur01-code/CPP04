#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor" << std::endl;
	this->_type = "Cat";
	this->_myBrain = new Brain();
}

Cat::Cat(const Cat& rhs)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = rhs;
	this->_myBrain = new Brain(*rhs._myBrain);
}

Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat copy assigment operator" << std::endl;
	this->_type = rhs._type;
	delete this->_myBrain;
	this->_myBrain = new Brain(*rhs._myBrain);
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

//calls the setIdea-function of it's brain
void Cat::setIdea(const std::string& idea, int i)
{
	this->_myBrain->setIdea(idea, i);
}

//calls the getIdea-function of it's brain
std::string Cat::getIdea(int i) const
{
	return (this->_myBrain->getIdea(i));
}

Brain* Cat::getBrain(void) const
{
	return (_myBrain);
}