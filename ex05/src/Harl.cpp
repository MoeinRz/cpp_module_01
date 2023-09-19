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

void	Harl::complain( std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*message[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*message[i])();
			return;
		}
	}
	std::cout << "This is a wrong input. Just use: 'DEBUG' or 'INFO' or 'WARNING' or 'ERROR'"  << level << std::endl;
}
