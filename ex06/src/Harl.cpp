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
    std::cout << "[DEBUG]\nThis is debug message." << std::endl;
}

void Harl::info(void)
{
    std::cout << "[INFO]\nThis is info message." << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[WARNING]\nThis is warning message." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ERROR]\nThis is error message." << std::endl;
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
            Harl::info();
            Harl::warning();
            Harl::error();
            break;
        case 1:
            Harl::info();
            Harl::warning();
            Harl::error();
            break;
        case 2:
            Harl::warning();
            Harl::error();
            break;
        case 3:
            Harl::error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
