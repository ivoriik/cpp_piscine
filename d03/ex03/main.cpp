int main(void) {
	FragTrap robot("Peter");

	robot.rangeAttack("human");
	robot.meleeAttack("another robot");
	robot.takeDamage(30);
	robot.takeDamage(50);
	robot.takeDamage(30);
	robot.beRepaired(80);
	robot.beRepaired(30);
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");

	ScavTrap rob("Moly");
	
	rob.rangeAttack("human");
	rob.meleeAttack("another robot");
	rob.takeDamage(30);
	rob.takeDamage(40);
	rob.beRepaired(10);
	rob.beRepaired(50);
	rob.challengeNewcomer();
	rob.challengeNewcomer();
	rob.challengeNewcomer();

}

int main(void)
{
	FragTrap ft("FR4GGY");

	for (int i = 0; i < 7; i++)
		ft.takeDamage(20);

	for (int i = 0; i < 7; i++)
		ft.beRepaired(20);

	ft.rangedAttack("alice");
	ft.meleeAttack("bob");

	for (int i = 0; i < 10; i++)
		ft.vaulthunter_dot_exe("GLADOS");

	ScavTrap st("SCAVVY");

	for (int i = 0; i < 7; i++)
		st.takeDamage(20);

	for (int i = 0; i < 7; i++)
		st.beRepaired(20);

	st.rangedAttack("bobby");
	st.meleeAttack("john");

	for (int i = 0; i < 5; i++)
		st.challengeNewcomer("kenny");
}