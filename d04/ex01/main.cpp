#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"



int main()
{
	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	std::cout << std::endl;
	Enemy *c = new SuperMutant();
	zaz->recoverAP();
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->attack(c);
	std::cout << *zaz;
	zaz->attack(c);
	std::cout << b->getType() << " has " << b->getHP() << " HP " << std::endl;
	return 0;
}