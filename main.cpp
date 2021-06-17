#include <iostream>

#include "unit/Soldier.hpp"
#include "unit/Rogue.hpp"

int main() {
    Soldier* soldier = new Soldier();
    Rogue* rogue = new Rogue();

    std::cout << *rogue << std::endl;
    std::cout << *soldier << std::endl;

    rogue->attack(soldier);

    std::cout << *rogue << std::endl;
    std::cout << *soldier << std::endl;

    soldier->attack(rogue);

    std::cout << *rogue << std::endl;
    std::cout << *soldier << std::endl;

    delete(soldier);
    delete(rogue);

    return 0;
}