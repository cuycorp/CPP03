#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
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
	if (this->HitPoints != 0 || this->EnergyPoints != 0)
	{
		//target->takeDamage();
        this->EnergyPoints -= 1;
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	}
}
//how can it make its target loose energy points if it has only -> getinstance by name
void ClapTrap::takeDamage(unsigned int amount)
{
    this->HitPoints -= amount;
    std::cout << "ClapTrap " << this->Name << " is taking a dmamage of" <<  amount << "hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoints != 0 || this->EnergyPoints != 0)
    {
        this->EnergyPoints -= 1;
        this->EnergyPoints += amount;  
        std::cout << "ClapTrap " << this->Name << " is being repaired by " << amount << " energy points." << std::endl;
	}

}

/***************** Required member functions*****************/

std::string ClapTrap::getName(void)
{
    return (this->Name);
}
