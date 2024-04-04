#include "Fixed.class.hpp"

const int    Fixed::_exponentBits = 8;

Fixed::Fixed() : _value(0)
{
    std::cout << "calling constructor." << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "calling copy constructor." << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &other)
{
    std::cout << "calling copy assignment." << std::endl;
}

Fixed::~Fixed()
{
    std::cout  << "calling destructor." << std::endl;
}

int     Fixed::getRawBits( void ) const
{
    std::cout  << "calling function getRawBits." << std::endl;
    return (this->_value);
}

void    Fixed::setRawBits( int const raw ) : _value(raw)
{
    std::cout  << "calling function setRawBits." << std::endl;
}