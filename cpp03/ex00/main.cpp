#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Bob");
	ClapTrap b("Rose");

	std::cout << "ClapTrap " << a.getName();
	std::cout << " attackDamage: " << a.getAttackDamage();
	std::cout << " hitpoint: " << a.getHitPoint();
	std::cout << " energypoint: " << a.getEnergyPoint() << std::endl;
	std::cout << "ClapTrap " << b.getName();
	std::cout << " attackDamage: " << b.getAttackDamage();
	std::cout << " hitpoint: " << b.getHitPoint();
	std::cout << " energypoint: " << b.getEnergyPoint() << std::endl;
	a.attack("Rose");
	b.takeDamage(a.getAttackDamage());
	std::cout << "ClapTrap " << a.getName();
	std::cout << " attackDamage: " << a.getAttackDamage();
	std::cout << " hitpoint: " << a.getHitPoint();
	std::cout << " energypoint: " << a.getEnergyPoint() << std::endl;
	std::cout << "ClapTrap " << b.getName();
	std::cout << " attackDamage: " << b.getAttackDamage();
	std::cout << " hitpoint: " << b.getHitPoint();
	std::cout << " energypoint: " << b.getEnergyPoint() << std::endl;
	b.beRepaired(15);
	a.attack("Rose");
	a.attack("Rose");
	a.attack("Rose");
	a.attack("Rose");
	a.attack("Rose");
	a.attack("Rose");
	a.attack("Rose");
	a.attack("Rose");
	a.attack("Rose");
	a.attack("Rose");
	a.attack("Rose");
	b.takeDamage(a.getAttackDamage());
	b.takeDamage(a.getAttackDamage());
	b.takeDamage(a.getAttackDamage());
	b.takeDamage(a.getAttackDamage());
	b.takeDamage(a.getAttackDamage());
	b.takeDamage(a.getAttackDamage());
	b.takeDamage(a.getAttackDamage());
	b.takeDamage(a.getAttackDamage());
	b.takeDamage(a.getAttackDamage());
	b.takeDamage(a.getAttackDamage());
	std::cout << "ClapTrap " << a.getName();
	std::cout << " attackDamage: " << a.getAttackDamage();
	std::cout << " hitpoint: " << a.getHitPoint();
	std::cout << " energypoint: " << a.getEnergyPoint() << std::endl;
	std::cout << "ClapTrap " << b.getName();
	std::cout << " attackDamage: " << b.getAttackDamage();
	std::cout << " hitpoint: " << b.getHitPoint();
	std::cout << " energypoint: " << b.getEnergyPoint() << std::endl;
}