#include "Human.hpp"

int main() {
	Human human;
	human.action("meleeAttack", "Dragon");
	human.action("rangedAttack", "Goblin");
	human.action("intimidatingShout", "Orc");
	human.action("magicAttack", "Troll");
	return 0;
}
