#include "../include/Zombie.hpp"

int main ()
{
	Zombie	Zombie_stack("Foo");
	Zombie_stack.announce();
	Zombie	*Zombie_heap;
	Zombie_heap = newZombie("heap");
	Zombie_heap->announce();
    randomChump("Chump Zombie");
	delete Zombie_heap;	
	return (0);
}
