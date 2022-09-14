#include "Ice.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
	std::cout << "Ice default constructor" << std::endl;
};

Ice::Ice(const Ice& rhs)
{
	*this = rhs;
	std::cout << "Ice default copy constructor" << std::endl;
};

Ice::~Ice(void)
{
	std::cout << "Ice default deconstructor" << std::endl;
};

Ice& Ice::operator=(const Ice& rhs)
{
	std::cout << "Ice default copy assigment operator" << std::endl;
	this->setType(rhs.getType());
	return (*this);
};

Ice* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
};