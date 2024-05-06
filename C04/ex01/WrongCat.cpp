#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat Default Constructor Called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &obj ) : WrongAnimal()
{
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
    this->type = obj.type;
}

WrongCat  &WrongCat::operator=( const WrongCat &obj )
{
    std::cout << "WrongCat Copy Assignment Constructor Called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "wrong meow wrong meow wrong meow" << std::endl;
}