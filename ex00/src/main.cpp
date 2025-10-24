#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap instanceOne("tmr");
    ClapTrap instanceTwo(instanceOne);
    ClapTrap instanceThree;
    ClapTrap a;
	ClapTrap b("Cody");
    std::cout << std::endl;
    
    std::cout << "\033[34mTesting\033[0m" << std::endl;
    //TEST: Canonical form 
    std::cout << "--------------- TESTING C.Form ---------------" << std::endl;

    instanceThree = instanceOne;
    std::cout << "instanceOne name: "<< instanceOne.getName() << std::endl;
    std::cout << "instanceTwo name: "<< instanceTwo.getName() << std::endl;
    std::cout << "instanceThree name: "<< instanceThree.getName() << std::endl;
    std::cout << std::endl;
    //TEST: damage, hit points depleated
    std::cout << "--------------- TESTING TAKE DAMAGE n REPAIRING ---------------" << std::endl;
	a.takeDamage(10); 
	a.takeDamage(10); 
	a.beRepaired(5); 
	a.attack("some other other robot");
	std::cout << std::endl;
    //TEST: attack functions limit, energy points depleated
  
    std::cout << "--------------- TESTING ATTACK n REPAIRING ---------------" << std::endl;
	
    b.beRepaired(3); 
    for (int i = 0; i < 11; i++)
    {
		std::cout << i << ": ";
        std::cout << "Energy points " << b.getEnergyPoints() << std::endl;
        b.attack("Cody-clone");
        std::cout << std::endl;
    }
	b.beRepaired(3);
    std::cout << std::endl;

	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
}

