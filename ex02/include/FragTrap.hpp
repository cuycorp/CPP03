#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        bool highFiveRequest;

    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap& other);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();
        //member function
        void highFivesGuys(void);
};

#endif


