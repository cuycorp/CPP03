#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
	this->highFiveRequest = false;
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap default constructor called with name " << name << std::endl;
	this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
	this->highFiveRequest = false;
    return ;
}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    (void) other;
    return ;
}


FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
		std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
	{
		this->setName(other.getName());
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
		this->highFiveRequest = false;
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " says: \"Give me a high five!\" 🖐️" << std::endl;
	if (this->highFiveRequest == false)
		this->highFiveRequest = true;
}
