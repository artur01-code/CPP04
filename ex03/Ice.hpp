#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
	Ice(void);
	Ice(const Ice& rhs);
	~Ice(void);
	Ice& operator=(const Ice& rhs);

	Ice* clone() const;
	void use(ICharacter& target);
};

#endif