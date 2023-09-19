#include "../include/Harl.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl harl;
        harl.complain(argv[1]);
        return (0);
    }
    else
    {
        std::cout << "Wrong input: ./harlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return (1);
    }
}
