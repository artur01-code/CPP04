#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->_type = "default";
	std::cout << "AMeteria default constructor" << std::endl;
};

AMateria::AMateria(std::string const& type)
{
	this->_type = type;
	std::cout << "AMeteria default constructor with type" << std::endl;
};

AMateria::AMateria(const AMateria& rhs)
{
	this->_type = rhs._type;
	std::cout << "AMeteria copy constructor" << std::endl;
};

AMateria::~AMateria(void)
{
	std::cout << "AMeteria default destructor" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
};

void AMateria::use(ICharacter& target)
{
	std::cout << "* AMaterias default attack on " << target.getName() << std::endl;
};

void AMateria::setType(std::string type)
{
	this->_type = type;
};