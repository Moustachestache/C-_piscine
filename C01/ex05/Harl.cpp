#include "main.class.hpp"

    Harl::Harl( void )
    {
    }

    Harl::~Harl( void )
    {
    }

    void    Harl::debug( void )
    {
        std::cout << "Debugging: beep boop. deep doop. Gzzzzzzzzz ..." << std::endl;
    }

    void    Harl::info( void )
    {
        std::cout << "Info: Running low on tortilla chips." << std::endl;
    }

    void    Harl::warning( void )
    {
        std::cout << "Warning! attenzione attenzione! pickpockets!" << std::endl;
    }

    void    Harl::error( void )
    {
        std::cout << "Error: bla bla bla something is erroring." << std::endl;
    }

    void    Harl::complain( std::string level )
    {
        void    (Harl::*ptr_f[4])() = {&Harl::debug, &Harl::info, &Harl:: warning, &Harl::error};
        std::string HarlLevel[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        int i = 0;

        while (level.compare(HarlLevel[i]) && i <= 3)
            i++;
        (this->*ptr_f[i])();
    }