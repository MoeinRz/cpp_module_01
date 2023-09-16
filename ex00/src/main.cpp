#include "../include/Zombie.hpp"

int main ()
{
	Zombie	Zombie_stack("Foo_on_stack");
	Zombie_stack.announce();
	
	Zombie	*Zombie_heap;
	Zombie_heap = newZombie("Foo_on_heap");
	Zombie_heap->announce();
	delete Zombie_heap;
	
	return (0);
}
