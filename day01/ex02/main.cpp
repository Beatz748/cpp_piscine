#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>


int	main()
{
	const size_t	army_size = 20;
	std::string zombieNames[88] = {
		"Alice", "Bob", "Charlie", "Diana", "Edward", "Fiona", "George", "Hannah", "Ian", "Julia",
		"Kevin", "Laura", "Michael", "Nina", "Oscar", "Pamela", "Quentin", "Rachel", "Samuel", "Tina",
		"Ulysses", "Victoria", "Walter", "Xena", "Yuri", "Zara", "Andrew", "Bella", "Christopher", "Daisy",
		"Evan", "Felicity", "Gabriel", "Holly", "Isaac", "Jessica", "Kenneth", "Linda", "Matthew", "Nancy",
		"Oliver", "Penelope", "Quincy", "Rebecca", "Simon", "Tiffany", "Victor", "Wendy", "Xander", "Yvette",
		"Zack", "Abigail", "Benjamin", "Catherine", "Daniel", "Emily", "Felix", "Grace", "Henry", "Isabelle",
		"Jacob", "Katherine", "Liam", "Lily", "Mason", "Madeline", "Noah", "Natalie", "Owen", "Olivia",
		"Peter", "Patricia", "Quinn", "Rose", "Sebastian", "Samantha", "Tristan", "Tara", "Vincent", "Valerie",
		"William", "Willa", "Xavier", "Xenia", "Yosef", "Yvonne", "Zane", "Zoe"
	};
	ZombieEvent	fabric;
	fabric.setZombieType(Zombie::CRAWLER);
	Zombie		*army[army_size];

	srand(time(0));
	for (size_t i = 0; i < army_size; ++i)
	{
		unsigned int	randomIndex = rand() % 88;
		std::string	name = zombieNames[randomIndex];
		army[i] = fabric.randomChump(name);
	}
	for (size_t i = 0; i < army_size; ++i)
	{
		delete army[i];
	}
}
