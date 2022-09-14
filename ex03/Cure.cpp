#include "Cure.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
	std::cout << "Cure default constructor" << std::endl;
};

Cure::Cure(const Cure& rhs)
{
	*this = rhs;
	std::cout << "Cure default copy constructor" << std::endl;
};

Cure::~Cure(void)
{
	std::cout << "Cure default deconstructor" << std::endl;
};

Cure& Cure::operator=(const Cure& rhs)
{
	std::cout << "Cure default copy assigment operator" << std::endl;
	this->setType(rhs.getType());
	return (*this);
};

Cure* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
};