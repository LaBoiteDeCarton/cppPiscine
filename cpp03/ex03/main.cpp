#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap d("Bob");

	d.highFivesGuys();
	d.guardGate();

	std::cout << d.getName();
	std::cout << " | attackDamage: " << d.getAttackDamage();
	std::cout << "   |  hitpoint: " << d.getHitPoint();
	std::cout << "  |  energypoint: " << d.getEnergyPoint() << std::endl;

	d.attack("Neo");

	std::cout << d.getName();
	std::cout << " | attackDamage: " << d.getAttackDamage();
	std::cout << "   |  hitpoint: " << d.getHitPoint();
	std::cout << "  |  energypoint: " << d.getEnergyPoint() << std::endl;

	d.whoAmI();
	return (0);
}