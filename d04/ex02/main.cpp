#include <iostream>
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl;
	ISpaceMarine* star = bob;
	star->battleCry();
	star->rangedAttack();
	star->meleeAttack();
	star = jim;
	star->battleCry();
	star->rangedAttack();
	star->meleeAttack();
	vlc->push(star);
	std::cout << "Squad count:: " << vlc->getCount() << std::endl;
	std::cout << std::endl;
	delete vlc;
	return 0;
}