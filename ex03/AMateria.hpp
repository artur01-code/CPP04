#ifndef AMETRIA_HPP
# define AMETRIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{

	public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(const AMateria& rhs);
	AMateria& operator=(const AMateria& rhs);
	virtual ~AMateria(void);

	protected:
	std::string _type;

	public:
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	void setType(std::string type);
};

#endif