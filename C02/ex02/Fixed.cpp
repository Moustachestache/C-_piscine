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

//  const int constructor
Fixed::Fixed(const int value)
{
    int temp;

    std::cout << "calling const int constructor." << std::endl;
    temp = (value << this->_exponentBits);
    this->setRawBits(temp);
}

//  const float constructor
Fixed::Fixed(const float fvalue)
{
    int temp;

    std::cout << "calling const int constructor." << std::endl;
    this->_value = roundf(fvalue * (1 << _exponentBits));
}

float   Fixed::toFloat(void) const
{
    float   temp = 0;

    temp = (float) this->_value / (1 << this->_exponentBits);
    return (temp);
}

int     Fixed::toInt( void ) const
{
    return (this->_value / (1 << this->_exponentBits));
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

//std::ostream    &operator<<( std::ostream &output, const Fixed &val )
std::ostream &operator<<( std::ostream &stream, const Fixed &value)
{
    stream << value.toFloat();
    return (stream);
}

//  overload ex03
//  comparison operators
	bool Fixed::operator>( const Fixed &other ) const
    {
        if (this->toFloat() > other.toFloat())
            return (true);
        return (false);
    }

	bool Fixed::operator<( const Fixed &other ) const
    {
        if (this->toFloat() < other.toFloat())
            return (true);
        return (false);
    }

	bool Fixed::operator>=( const Fixed &other ) const
    {
        if (this->toFloat() >= other.toFloat())
            return (true);
        return (false);
    }

	bool Fixed::operator<=( const Fixed &other ) const
    {
        if (this->toFloat() <= other.toFloat())
            return (true);
        return (false);
    }
    
	bool Fixed::operator==( const Fixed &other ) const
    {
        if (this->toFloat() == other.toFloat())
            return (true);
        return (false);
    }
    
	bool Fixed::operator!=( const Fixed &other ) const
    {
        if (this->toFloat() != other.toFloat())
            return (true);
        return (false);
    }

    // arithmetic operators
	Fixed   Fixed::operator+( const Fixed &other ) const
    {
        return Fixed(this->toFloat() + other.toFloat());
    }
    
	Fixed   Fixed::operator-( const Fixed &other ) const
    {
        return Fixed(this->toFloat() - other.toFloat());
    }
    
	Fixed   Fixed::operator*( const Fixed &other ) const
    {
        return Fixed(this->toFloat() * other.toFloat());
    }
    
	Fixed   Fixed::operator/( const Fixed &other ) const
    {
        return Fixed(this->toFloat() / other.toFloat());
    }

    //  increment decrement
    Fixed   &Fixed::operator++()
    {
        this->_value + 1;
        return *this;
    }

    Fixed   Fixed::operator++(int)
    {
        Fixed old = *this;  // copy old value
        old++;              // prefix increment
        return old;         // return old value
    }

    Fixed   &Fixed::operator--()
    {
        this->_value - 1;
        return *this;
    }

    Fixed   Fixed::operator--(int)
    {
        Fixed old = *this;  // copy old value
        old--;              // prefix increment
        return old;         // return old value
    }