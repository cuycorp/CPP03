#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
  private:
	std::string Name;

  protected:
	unsigned int HitPoints;
	unsigned int EnergyPoints;
	unsigned int AttackDamage;

  public:
	ClapTrap(void);
	ClapTrap(std::string inName);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap();
	// required member functions
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	// Getter
	std::string getName(void);
	unsigned int getHitPoints(void);
	unsigned int getEnergyPoints(void);
};

#endif
