#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie onTheStack(name);

	onTheStack.announce();
 }