#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : Name("nameless"), HitPoints(10), EnergyPoints(10),
	AttackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string inName) : Name(inName), HitPoints(10),
	EnergyPoints(10), AttackDamage(0)
{
	std::cout << "Default constructor called with initialization" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
	{
		this->Name = other.Name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/***************** Required member functions*****************/
void ClapTrap::attack(const std::string &target)
{
	if (this->HitPoints > 0 && this->EnergyPoints > 0)
	{
		this->EnergyPoints -= 1;
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->Name << "cannot attack because it does not have enough points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints >= amount)
		this->HitPoints -= amount;
	else if (this->HitPoints > 0)
		this->HitPoints = 0;
	else
	{
		std::cout << "ClapTrap " << this->Name << " is already dead, stap !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->Name << " is taking a damage of " << amount << " hit points, now it has " << this->HitPoints << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoints > 0 && this->EnergyPoints > 0)
	{
		this->EnergyPoints -= 1;
		this->HitPoints += amount;
		std::cout << "ClapTrap " << this->Name << " is being repaired, it now has " << this->HitPoints << " hit points." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->Name << " cannot be repaired because it does not have enough points " << std::endl;
}

/***************** Getters *****************/

std::string ClapTrap::getName(void)
{
	return (this->Name);
}

unsigned int ClapTrap::getHitPoints(void)
{
	return (this->HitPoints);
}
unsigned int ClapTrap::getEnergyPoints(void)
{
	return (this->EnergyPoints);
}
