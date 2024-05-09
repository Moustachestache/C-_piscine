#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("default WrongAnimal")
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &obj )
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    this->type = obj.type;
}

WrongAnimal  &WrongAnimal::operator=( const WrongAnimal &obj )
{
    std::cout << "WrongAnimal Overload Assignment Constructor called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}


std::string WrongAnimal::getType( void ) const
{
    return (type);
}

void    WrongAnimal::makeSound( void ) const
{
    std::cout << "wrong noise wrong noise wrong noise" << std::endl;
}