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
        void    writeIdeas( void ) const;
        void    rethinkIdeas( int i, std::string str );
        const   Brain&  getBrain( void ) const;
    private:
        Brain   *brain;
};