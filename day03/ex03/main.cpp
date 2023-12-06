#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // Создаем объекты различных типов
    ClapTrap clap("Clap");
    FragTrap frag("Frag");
    ScavTrap scav("Scav");
    NinjaTrap ninja("Ninja");

    // Вызываем функцию ninjaShoebox для каждого типа
    ninja.ninjaShoebox(clap);
    ninja.ninjaShoebox(frag);
    ninja.ninjaShoebox(scav);
    ninja.ninjaShoebox(ninja);

    return 0;
}

