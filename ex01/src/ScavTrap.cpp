#include "ScavTrap.hpp"
#include <string>

// Default constructor
ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called with name" <<  << std::endl;
	this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    return ;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	(void)other;
    //should I overwrite the new valued of parameters here 
	return ;
}

// Assignment operator overload
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	(void)other;
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
	std::cout << "ScavTrap " << this->getName() << "is now in gate keeper mode" << std::endl;
}
