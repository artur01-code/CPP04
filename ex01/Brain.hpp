#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
	Brain(void);
	Brain(const Brain& rhs);
	Brain& operator=(const Brain& rhs);
	~Brain(void);

	protected:
	std::string _ideas[100];

	public:
	void setIdea(const std::string& idea, int i);
	std::string getIdea(int i);
};

#endif