#pragma once

# include "Animal.hpp"
class Dog : public Animal
{
    public:
        Dog();
        Dog( const Dog &obj );
        Dog  &operator=( const Dog &obj );
        ~Dog();
        void    makeSound( void ) const;
        void    printIdeas( void );
    private:
        Brain *brain;
};