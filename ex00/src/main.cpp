#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap instanceOne("la_ptmr");
    ClapTrap instanceTwo(instanceOne);
    ClapTrap instanceThree;
    
    instanceThree = instanceOne;
    std::cout << "instanceOne name: "<< instanceOne.getName() << std::endl;
    std::cout << "instanceTwo name: "<< instanceTwo.getName() << std::endl;
    std::cout << "instanceThree name: "<< instanceThree.getName() << std::endl;
}
