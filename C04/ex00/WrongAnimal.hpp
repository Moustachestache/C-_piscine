#pragma once
#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal( const WrongAnimal &obj );
        WrongAnimal          &operator=( const WrongAnimal &obj );
        virtual ~WrongAnimal();
        std::string     getType( void ) const;
        void    makeSound( void ) const;
    protected:
        std::string     type;
};