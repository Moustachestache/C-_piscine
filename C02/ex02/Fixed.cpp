#include "Fixed.class.hpp"

const int    Fixed::_exponentBits = 8;

Fixed::Fixed() : _value(0)
{
}

Fixed::Fixed(const Fixed &fixed)
{
    this->_value = fixed.getRawBits();
}

//  const int constructor
Fixed::Fixed(const int value)
{
    int temp;

    temp = (value << this->_exponentBits);
    this->setRawBits(temp);
}

//  const float constructor
Fixed::Fixed(const float fvalue)
{
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
    if (this == &other)
        return *this;
    this->_value = other.getRawBits();
    return (*this);
}


Fixed::~Fixed()
{
}

int     Fixed::getRawBits( void ) const
{
    return (this->_value);
}

void    Fixed::setRawBits( int const raw )
{
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
    //  prefix
    Fixed   &Fixed::operator++()
    {
        ++_value;
        return *this;
    }

    //  postfix
    Fixed   Fixed::operator++(int)
    {
        Fixed   old(*this);

        _value++;
        return old;
    }

    Fixed   &Fixed::operator--()
    {
        --_value;
        return *this;
    }

    Fixed   Fixed::operator--(int)
    {
        Fixed   old(*this);

        _value--;
        return old;
    }

    //  overloaded function
    const Fixed     &Fixed::min(const Fixed &a, const Fixed &b)
    {
        if (a > b)
            return b;
        return a;
    }

    Fixed   &Fixed::min(Fixed &a, Fixed &b)
    {
        if (a > b)
            return b;
        return a;
    }
    
    const Fixed     &Fixed::max(const Fixed &a, const Fixed &b)
    {
        if (a < b)
            return b;
        return a;
    }
    
    Fixed   &Fixed::max(Fixed &a, Fixed &b)
    {
        if (a < b)
            return b;
        return a;
    }
    