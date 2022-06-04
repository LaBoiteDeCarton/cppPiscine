#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ScavTrap a("Bob");
	ClapTrap b("Rose");
	FragTrap c("NiceGuy");
	FragTrap d("BADGUY");
	c.takeDamage(a.getAttackDamage());
	d = c;

	std::cout << a.getName();
	std::cout << " attackDamage: " << a.getAttackDamage();
	std::cout << " hitpoint: " << a.getHitPoint();
	std::cout << " energypoint: " << a.getEnergyPoint() << std::endl;
	std::cout << b.getName();
	std::cout << " attackDamage: " << b.getAttackDamage();
	std::cout << " hitpoint: " << b.getHitPoint();
	std::cout << " energypoint: " << b.getEnergyPoint() << std::endl;
	std::cout << c.getName();
	std::cout << " attackDamage: " << c.getAttackDamage();
	std::cout << " hitpoint: " << c.getHitPoint();
	std::cout << " energypoint: " << c.getEnergyPoint() << std::endl;
	std::cout << d.getName();
	std::cout << " attackDamage: " << d.getAttackDamage();
	std::cout << " hitpoint: " << d.getHitPoint();
	std::cout << " energypoint: " << d.getEnergyPoint() << std::endl;

	a.attack("Rose");
	c.takeDamage(a.getAttackDamage());

	std::cout << a.getName();
	std::cout << " attackDamage: " << a.getAttackDamage();
	std::cout << " hitpoint: " << a.getHitPoint();
	std::cout << " energypoint: " << a.getEnergyPoint() << std::endl;
	std::cout << b.getName();
	std::cout << " attackDamage: " << b.getAttackDamage();
	std::cout << " hitpoint: " << b.getHitPoint();
	std::cout << " energypoint: " << b.getEnergyPoint() << std::endl;
	std::cout << c.getName();
	std::cout << " attackDamage: " << c.getAttackDamage();
	std::cout << " hitpoint: " << c.getHitPoint();
	std::cout << " energypoint: " << c.getEnergyPoint() << std::endl;
	std::cout << d.getName();
	std::cout << " attackDamage: " << d.getAttackDamage();
	std::cout << " hitpoint: " << d.getHitPoint();
	std::cout << " energypoint: " << d.getEnergyPoint() << std::endl;

	c.beRepaired(10);
	c.beRepaired(10);
	c.beRepaired(10);
	c.beRepaired(10);

	std::cout << a.getName();
	std::cout << " attackDamage: " << a.getAttackDamage();
	std::cout << " hitpoint: " << a.getHitPoint();
	std::cout << " energypoint: " << a.getEnergyPoint() << std::endl;
	std::cout << b.getName();
	std::cout << " attackDamage: " << b.getAttackDamage();
	std::cout << " hitpoint: " << b.getHitPoint();
	std::cout << " energypoint: " << b.getEnergyPoint() << std::endl;
	std::cout << c.getName();
	std::cout << " attackDamage: " << c.getAttackDamage();
	std::cout << " hitpoint: " << c.getHitPoint();
	std::cout << " energypoint: " << c.getEnergyPoint() << std::endl;

	a.guardGate();
	c.highFivesGuys();

	return (0);
}