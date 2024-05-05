#pragma once

# include "Animal.hpp"
class Dog : public Animal
{
    public:
        Dog();
        Dog( const Dog &obj );
        Dog  &operator=( const Dog &obj );
        virtual ~Dog();
        virtual void    makeSound( void ) const;
};