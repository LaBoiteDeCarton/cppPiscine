#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap a("Bob");
	ClapTrap b("Rose");

	std::cout << a.getName();
	std::cout << " attackDamage: " << a.getAttackDamage();
	std::cout << " hitpoint: " << a.getHitPoint();
	std::cout << " energypoint: " << a.getEnergyPoint() << std::endl;
	std::cout << b.getName();
	std::cout << " attackDamage: " << b.getAttackDamage();
	std::cout << " hitpoint: " << b.getHitPoint();
	std::cout << " energypoint: " << b.getEnergyPoint() << std::endl;

	a.attack("Rose");
	b.takeDamage(3);

	std::cout << a.getName();
	std::cout << " attackDamage: " << a.getAttackDamage();
	std::cout << " hitpoint: " << a.getHitPoint();
	std::cout << " energypoint: " << a.getEnergyPoint() << std::endl;
	std::cout << b.getName();
	std::cout << " attackDamage: " << b.getAttackDamage();
	std::cout << " hitpoint: " << b.getHitPoint();
	std::cout << " energypoint: " << b.getEnergyPoint() << std::endl;

	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);
	a.beRepaired(10);

	std::cout << a.getName();
	std::cout << " attackDamage: " << a.getAttackDamage();
	std::cout << " hitpoint: " << a.getHitPoint();
	std::cout << " energypoint: " << a.getEnergyPoint() << std::endl;
	std::cout << b.getName();
	std::cout << " attackDamage: " << b.getAttackDamage();
	std::cout << " hitpoint: " << b.getHitPoint();
	std::cout << " energypoint: " << b.getEnergyPoint() << std::endl;

	a.guardGate();

	return (0);
}