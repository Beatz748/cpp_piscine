#include <iostream>
#include "FragTrap.hpp"

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // Создание экземпляров FragTrap и ScavTrap
    FragTrap frag("FragTrap");
    ScavTrap scav("ScavTrap");

    // Взаимодействие между ними
    frag.meleeAttack(scav.getName());
    scav.takeDamage(frag.getMeleeAtackDamage());

    scav.rangedAttack(frag.getName());
    frag.takeDamage(scav.getRangedAtackDamage());

    frag.vaulthunter_dot_exe(scav.getName());
    scav.takeDamage(30);

    scav.challengeNewcomer(frag.getName());
    frag.takeDamage(20);

    return 0;
}

