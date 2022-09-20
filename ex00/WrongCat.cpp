#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & rhs)
{
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = rhs;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat default destructor" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & rhs)
{
	std::cout << "WrongCat copy assigment operator" << std::endl;
	this->_type = rhs._type;
	return(*this);
}
