#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	//uncomment to check for an abstract class
	//AMateria a;
	Ice a;
	Cure b;
	Character victim("Burney");
	Character d;
	std::cout << std::string(50, '-') << std::endl;
	a.use(victim);
	b.use(victim);
	std::cout << std::string(50, '-') << std::endl;
	victim.unequip(0);
	victim.equip(&a);
	std::cout << victim.getName() << " equipt " << a.getType() << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	victim.use(0, d);
	std::cout << std::string(50, '-') << std::endl;
	victim.unequip(0);
	std::cout << victim.getName() << " unequipt " << a.getType() << std::endl;
	std::cout << std::string(50, '-') << std::endl;


}