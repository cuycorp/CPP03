#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(const ScavTrap& other);
        ScavTrap &operator=(const ScavTrap &other);
        ~ScavTrap();
        //member function
        void guardGate(void);
};

#endif
