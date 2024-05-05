#pragma once
#include <iostream>

class Animal
{
    public:
        Animal();
        Animal( const Animal &obj );
        Animal          &operator=( const Animal &obj );
        virtual ~Animal();
        std::string     getType( void ) const;
        virtual void    makeSound( void ) const;
    protected:
        std::string     type;
};