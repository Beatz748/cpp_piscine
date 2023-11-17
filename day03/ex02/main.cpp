#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // Тестирование ClapTrap
    ClapTrap clap1; // использование конструктора по умолчанию
    ClapTrap clap2("CL4P-TP"); // использование конструктора с параметром
    ClapTrap clap3(clap2); // использование конструктора копирования
    ClapTrap clap4 = clap2; // еще один способ использования конструктора копирования

    clap1 = clap2; // использование оператора присваивания

    // Тестирование FragTrap
    FragTrap frag1; 
    FragTrap frag2("FR4G-TP");
    FragTrap frag3(frag2);
    FragTrap frag4 = frag2;

    frag1 = frag2;

    // Тестирование ScavTrap
    ScavTrap scav1; 
    ScavTrap scav2("SC4V-TP");
    ScavTrap scav3(scav2);
    ScavTrap scav4 = scav2;

    scav1 = scav2;

    return 0;
}

