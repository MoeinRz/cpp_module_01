#include "../include/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
    Zombie *moein = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        moein[i].setName(name);
    }
    return (moein);
}
