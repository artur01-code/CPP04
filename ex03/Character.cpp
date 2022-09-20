#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character default constructor" << std::endl;
	this->_name = "default";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
};

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character default constructor with name" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
};

Character::Character(Character const &rhs)
{
	this->setName(rhs.getName());
	for (int i = 0; i < 100; i++)
		this->inventory[i] = rhs.inventory[i];
	std::cout << "Character copy constructor" << std::endl;
};

Character& Character::operator=(Character const &rhs)
{
	this->setName(rhs.getName());
	for (int i = 0; i < 100; i++)
		this->inventory[i] = rhs.inventory[i];
	return (*this);
};

Character::~Character(void)
{
	std::cout << "Character default destructor" << std::endl;
	int i = 0;
	while (this->inventory[i] != NULL)
	{
		// this->trash[i]->~AMateria();
		delete this->inventory[i];
		i++;
	}
}

std::string const & Character::getName() const
{
	return (this->_name);
};

void Character::setName(std::string name)
{
	this->_name = name;
};

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4 && this->inventory[i])
		i++;
	if (i < 4)
	{
		std::cout << this->getName() << " equipt " << m->getType() << std::endl;
		this->inventory[i] = m;
	}
	else
		std::cout << "cannot euqip, inventory full °-°" << std::endl;
};

void Character::unequip(int idx)
{
	if (this->inventory[idx])
	{
		std::cout << this->getName() << " unequipt " << this->inventory[idx]->getType() << std::endl;
		this->inventory[idx] = NULL;
	}
	else
		std::cout << "Invalid index °-°" << std::endl;
};

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout << "Index too high °-°" << std::endl;
};
