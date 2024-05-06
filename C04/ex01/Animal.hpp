#pragma once
#include <iostream>
#include "Brain.hpp"
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