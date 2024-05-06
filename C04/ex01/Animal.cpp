#include "Animal.hpp"

Animal::Animal( void ) : type("default animal")
{
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal( const Animal &obj )
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    this->type = obj.type;
}

Animal  &Animal::operator=( const Animal &obj )
{
    std::cout << "Animal Overload Assignment Constructor called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

Animal::~Animal( void )
{
    std::cout << "Animal Destructor called" << std::endl;
}


std::string Animal::getType( void ) const
{
    return (type);
}

void    Animal::makeSound( void ) const
{
    std::cout << "noise noise noise" << std::endl;
}