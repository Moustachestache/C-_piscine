#pragma once
#include <iostream>
#include "Brain.hpp"
class Animal
{
    public:
        Animal();
        virtual ~Animal();
        Animal( const Animal &obj );
        Animal          &operator=( const Animal &obj );
        std::string     getType( void ) const;
        virtual void    makeSound( void ) const = 0;
        virtual void    writeIdeas( void ) const;
        virtual void    rethinkIdeas( void );
    protected:
        std::string     type;
};