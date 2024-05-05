#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    this->type = "Cat";
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
}

void    Cat::makeSound( void ) const
{
    std::cout << "meow meow meow" << std::endl;
}