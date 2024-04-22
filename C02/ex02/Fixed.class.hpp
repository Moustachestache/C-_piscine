#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>
/*The 6 comparison operators: >, <, >=, <=, == and !=.
• The 4 arithmetic operators: +, -, *, and /.
• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
post-decrement) operators, that will increase or decrease the fixed-point value from
the smallest representable ϵ such as 1 + ϵ > 1.*/
class Fixed
{
    public:
    //constructors
        Fixed();
        ~Fixed();
        Fixed( const Fixed &fixed );
        Fixed( const int value) ;
        Fixed( const float fvalue );
    //  functions
        int     toInt( void ) const;
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
    //canonical assignment overload
		    Fixed   &operator=( const Fixed &other );
    //  overload: The 6 comparison operators: >, <, >=, <=, == and !=
        bool operator>( const Fixed &other ) const;
        bool operator<( const Fixed &other ) const;
        bool operator>=( const Fixed &other ) const;
        bool operator<=( const Fixed &other ) const;
        bool operator==( const Fixed &other ) const;
        bool operator!=( const Fixed &other ) const;
    //  overload: The 4 arithmetic operators: +, -, *, and /
		    Fixed   operator+( const Fixed &other ) const;
		    Fixed   operator-( const Fixed &other ) const;
		    Fixed   operator*( const Fixed &other ) const;
		    Fixed   operator/( const Fixed &other ) const;
    //  overload: he 4 increment/decrement ++x --x, x++, x--
    //  https://www.youtube.com/watch?v=Zn9LHIOi7zY

    private:
        int                 _value;
        static const int    _exponentBits;
};

std::ostream    &operator<<(std::ostream &stream, const Fixed &value);
#endif