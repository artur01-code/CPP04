#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "default";
}

Brain::Brain(const Brain& rhs)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = rhs;
}

Brain& Brain::operator=(const Brain& rhs)
{
	std::cout << "Brain copy assigment operator" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain default destructor" << std::endl;
}

void Brain::setIdea(const std::string& idea, int i)
{
	this->_ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
	return (this->_ideas[i]);
}
