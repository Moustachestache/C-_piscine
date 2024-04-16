#include "Fixed.class.hpp"

const int    Fixed::_exponentBits = 8;

Fixed::Fixed() : _value(0)
{
    std::cout << "calling constructor." << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "calling copy constructor." << std::endl;
    this->_value = fixed.getRawBits();
}

//  caca
//  Fixed   &operator=(const Fixed &other)
Fixed   &Fixed::operator=(const Fixed &other)
{
    std::cout << "calling copy assignment." << std::endl;
    if (this == &other)
        return *this;
    this->_value = other.getRawBits();
    return (*this);
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

void    Fixed::setRawBits( int const raw )
{
    std::cout  << "calling function setRawBits." << std::endl;
    this->_value = raw;
}