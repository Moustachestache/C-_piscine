#pragma once

# include "Animal.hpp"
class Cat : public Animal
{
    public:
        Cat();
        Cat( const Cat &obj );
        Cat  &operator=( const Cat &obj );
        ~Cat();
        void    makeSound( void ) const;
        void    writeIdeas( void ) const;
        void    rethinkIdeas( int i, std::string str );
        const   Brain&  getBrain( void ) const;
    private:
        Brain   *brain;
};