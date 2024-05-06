#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    this->brain = new Brain();
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
    delete this->brain;
}

void    Dog::makeSound( void ) const
{
    std::cout << "woof woof woof" << std::endl;
}

void    Dog::printIdeas( void )
{
    std::cout << "| ";
    for (int i = 0; i < 100; i++)
    {
        std::cout << this->brain->getIdea(i) << " | ";
    }
    std::cout << std::endl;
}