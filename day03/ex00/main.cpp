#include <iostream>
#include "FragTrap.hpp"

int main() {
    std::string names[10] = {"Alice", "Bob", "Charlie", "Daisy", "Edward", "Frank", "Grace", "Hannah", "Ivan", "Jack"};

    for (int i = 0; i < 10; ++i) {
        FragTrap frag("Frag" + names[i]);
        for (int j = 0; j < 3; ++j) {
            frag.rangedAttack(names[i]);
            frag.meleeAttack(names[i]);
            frag.takeDamage(20);
            frag.vaulthunter_dot_exe(names[i]);
            frag.beRepaired(10);
            frag.cyberAttack(names[i]);
        }
    }

    return 0;
}

