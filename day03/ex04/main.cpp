#include "SuperTrap.hpp"

int main() {
    // Create a SuperTrap using the default constructor
    SuperTrap superTrapDefault;
    superTrapDefault.rangedAttack("Target1");
    superTrapDefault.meleeAttack("Target2");
    std::cout << "\n";

    // Create a SuperTrap using the parameterized constructor
    SuperTrap superTrapParameterized("MegaTrap");
    superTrapParameterized.rangedAttack("Target3");
    superTrapParameterized.meleeAttack("Target4");
    std::cout << "\n";

    // Copy construct a SuperTrap
    SuperTrap superTrapCopy(superTrapParameterized);
    superTrapCopy.rangedAttack("Target5");
    superTrapCopy.meleeAttack("Target6");
    std::cout << "\n";

    // Create a SuperTrap using the assignment operator
    SuperTrap superTrapAssign;
    superTrapAssign = superTrapCopy;
    superTrapAssign.rangedAttack("Target7");
    superTrapAssign.meleeAttack("Target8");
    std::cout << "\n";

    return 0;
}

