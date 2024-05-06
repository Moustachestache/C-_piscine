#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat( const Cat &obj ) : Animal()
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    this->type = obj.type;
}

Cat  &Cat::operator=( const Cat &obj )
{
    std::cout << "Cat Copy Assignment Constructor Called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
    delete this->brain;
}

void    Cat::makeSound( void ) const
{
    std::cout << "meow meow meow" << std::endl;
}

void    Cat::writeIdeas( void ) const
{
    std::cout << "| ";
    for (int i = 0; i < 100; i++)
    {
        std::cout << this->brain->getIdea(i) << " | ";
    }
    std::cout << std::endl;
}