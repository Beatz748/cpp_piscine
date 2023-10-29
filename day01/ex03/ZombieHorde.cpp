#include "ZombieHorde.hpp"
#include <_types/_uint16_t.h>

ZombieHorde::ZombieHorde(int N)
{
	_horde = new Zombie[N];
	_n = N;
	std::string zombieNames[88] = {
		"Alice", "Bob", "Charlie", "Diana",
		"Edward", "Fiona", "George", "Hannah",
		"Ian", "Julia", "Kevin", "Laura", "Michael",
		"Nina", "Oscar", "Pamela", "Quentin", "Rachel",
		"Samuel", "Tina", "Ulysses", "Victoria", "Walter",
		"Xena", "Yuri", "Zara", "Andrew", "Bella", "Christopher",
		"Daisy", "Evan", "Felicity", "Gabriel", "Holly", "Isaac",
		"Jessica", "Kenneth", "Linda", "Matthew", "Nancy",
		"Oliver", "Penelope", "Quincy", "Rebecca", "Simon",
		"Tiffany", "Victor", "Wendy", "Xander", "Yvette",
		"Zack", "Abigail", "Benjamin", "Catherine", "Daniel",
		"Emily", "Felix", "Grace", "Henry", "Isabelle",
		"Jacob", "Katherine", "Liam", "Lily", "Mason",
		"Madeline", "Noah", "Natalie", "Owen", "Olivia",
		"Peter", "Patricia", "Quinn", "Rose", "Sebastian",
		"Samantha", "Tristan", "Tara", "Vincent", "Valerie",
		"William", "Willa", "Xavier", "Xenia", "Yosef",
		"Yvonne", "Zane", "Zoe"
	};

	srand(time(0));
	for (int i = 0; i < N; ++i)
	{
		Zombie::Type	type;
		uint16_t rType = rand() % 3;
		if (rType == Zombie::CRAWLER)
			type = Zombie::CRAWLER;
		else if (rType == Zombie::RUNNER)
			type = Zombie::RUNNER;
		else
			type = Zombie::WALKER;
		uint16_t rIdx = rand() % 88;
		_horde[i] = Zombie(type, zombieNames[rIdx]);
	}
}

void	ZombieHorde::announce() const
{
	for (int i = 0; i < _n; ++i)
	{
		_horde[i].announce();
	}
}
