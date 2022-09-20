#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
		public:
		Character(void);
		Character(std::string name);
		Character(Character const &rhs);
		Character& operator=(Character const &rhs);
		~Character(void);

		std::string const & getName() const;
		void setName(std::string name);
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);


		protected:
		std::string _name;
		AMateria *inventory[4];
		//AMateria *trash[100];
};

#endif
