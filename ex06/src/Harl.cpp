#include "../include/Harl.hpp"

Harl::Harl(void)
{
    return ;
}

Harl::~Harl(void)
{
    return ;
}

void Harl::debug(void)
{
    std::cout << "This is debug message." << std::endl;
}

void Harl::info(void)
{
    std::cout << "This is info message." << std::endl;
}

void Harl::warning(void)
{
    std::cout << "This is warning message." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is error message." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int levelIndex = -1;

    for (int i = 0; i < 4; ++i)
    {
        if (level == levels[i])
        {
            levelIndex = i;
            break;
        }
    }

    switch (levelIndex)
    {
        case 0:
            Harl::debug();
            break;
        case 1:
            Harl::debug();
            Harl::info();
            break;
        case 2:
            Harl::debug();
            Harl::info();
            Harl::warning();
            break;
        case 3:
            Harl::debug();
            Harl::info();
            Harl::warning();
            Harl::error();
            break;
        default:
            std::cout << "Wrong input." << std::endl;
            std::cout << "Please input DEBUG, INFO, WARNING, or ERROR." << std::endl;
            break;
    }
}
