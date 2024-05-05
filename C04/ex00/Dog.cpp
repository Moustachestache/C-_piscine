#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    this->type = "Dog";
}

Dog::Dog( const Dog &obj ) : Animal()
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
    this->type = obj.type;
}

Dog  &Dog::operator=( const Dog &obj )
{
    std::cout << "Dog Copy Assignment Constructor Called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "woof woof woof" << std::endl;
}