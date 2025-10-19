#include "ScavTrap.hpp"
#include <string>

// Default constructor
ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
	this->guardsGate = false;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called with name " << name << std::endl;
	this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
	this->guardsGate = false;
    return ;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

// Assignment operator overload
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
		std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
	{
		this->setName(other.getName());
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
		this->guardsGate = false;
	}
	return (*this);
}

// Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

void ScavTrap::guardGate(void)
{
	if (this->guardsGate == false)
	{
		this->guardsGate = true;
		std::cout << "ScavTrap " << this->getName() << " is now in gate keeper mode" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->getName() << " is already in gate keeper mode" << std::endl;
}
