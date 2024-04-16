#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>
/*Private members:
◦ An integer to store the fixed-point number value.
◦ A static constant integer to store the number of fractional bits. Its value
will always be the integer literal 8.

• Public members:
◦ A default constructor that initializes the fixed-point number value to 0.
◦ A copy constructor.
◦ A copy assignment operator overload.
◦ A destructor.
◦ A member function int getRawBits( void ) const;
that returns the raw value of the fixed-point value.
◦ A member function void setRawBits( int const raw );
that sets the raw value of the fixed-point number.*/
class Fixed
{
    public:
    //constructors
        Fixed();
        ~Fixed();
        Fixed( const Fixed &fixed );
        Fixed(const int value);
        Fixed(const float fvalue);
    //overload
		Fixed   &operator=( const Fixed &other );
    //https://www.youtube.com/watch?v=Zn9LHIOi7zY
        int     toInt( void ) const;
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat(void) const;

    private:
        int                 _value;
        static const int    _exponentBits;
};

std::ostream    &operator<<(std::ostream &stream, const Fixed &value);
#endif