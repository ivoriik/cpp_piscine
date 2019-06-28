int main(void) {
	ScavTrap robot("Moly");

	robot.rangeAttack("human");
	robot.meleeAttack("another robot");
	robot.takeDamage(30);
	robot.takeDamage(30);
	robot.beRepaired(80);
	robot.challengeNewcomer();
	robot.challengeNewcomer();
	robot.challengeNewcomer();
}

#include <ctime>
#include <cstdlib>
#include "FragTrap.hpp"

int		main( void )
{
	int i;
	srand(time(0));

	FragTrap ft = FragTrap( );
	FragTrap ft2 = FragTrap("Cl4P-TP");
	FragTrap ft3 = FragTrap(ft2);

	std::cout << std::endl;
	std::cout << "Let's Play ! with " << ft.getName( ) << std::endl;
	ft.takeDamage( 15 );
	std::cout << "HitPoints = " << ft.getHitPoints( ) << std::endl;
	ft.takeDamage( 25 );
	std::cout << "HitPoints = " << ft.getHitPoints( ) << std::endl;
	ft.beRepaired( 20 );
	std::cout << "HitPoints = " << ft.getHitPoints( ) << std::endl;
	
	i = 0;
	while ( i < 7 ) {
		ft.vaulthunter_dot_exe( "Futurist Vickings" );
		std::cout << std::endl;
		i++;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Let's Play ! with " << ft2.getName( ) << std::endl;

	ft2.takeDamage( 55 );
	std::cout << "HitPoints = " << ft2.getHitPoints( ) << std::endl;
	ft2.takeDamage( 25 );
	std::cout << "HitPoints = " << ft2.getHitPoints( ) << std::endl;
	ft2.beRepaired( 35 );
	std::cout << "HitPoints = " << ft2.getHitPoints( ) << std::endl;

	i = 0;
	while ( i < 5 ) {
		ft2.vaulthunter_dot_exe( "Golumns" );
		std::cout << std::endl;
		i++;
	}


	return 0;
}

int		main( void )
{
	int i;
	srand(time(0));

	ScavTrap st = ScavTrap("Full-Scav");
	FragTrap ft = FragTrap("Cl4P-TP");

	std::cout << std::endl;
	std::cout << "Let's Play ! with " << ft.getName( ) << std::endl;
	i = 0;
	while ( i < 7 ) {
		ft.vaulthunter_dot_exe( "Futurist Vickings" );
		std::cout << std::endl;
		i++;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Let's Play ! with " << st.getName( ) << std::endl;
	i = 0;
	while ( i < 5 ) {
		st.challengeNewcomer( );
		std::cout << std::endl;
		i++;
	}

	return 0;
}

int main(void)
{
	ScavTrap st("SCAVVY");
	ScavTrap st2(st);

	for (int i = 0; i < 7; i++)
		st.takeDamage(20);

	for (int i = 0; i < 7; i++)
		st.beRepaired(20);

	st.rangedAttack("bobby");
	st.meleeAttack("john");

	for (int i = 0; i < 5; i++)
		st.challengeNewcomer("kenny");
}