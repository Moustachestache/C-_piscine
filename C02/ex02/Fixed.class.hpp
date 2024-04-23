#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>
/*The 6 comparison operators: >, <, >=, <=, == and !=.
• The 4 arithmetic operators: +, -, *, and /.
• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
post-decrement) operators, that will increase or decrease the fixed-point value from
the smallest representable ϵ such as 1 + ϵ > 1.

A static member function min that takes as parameters two references on fixed-point
numbers, and returns a reference to the smallest one.
• A static member function min that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the smallest one.
• A static member function max that takes as parameters two references on fixed-point
numbers, and returns a reference to the greatest one.
• A static member function max that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the greatest one.*/
//  https://www.youtube.com/watch?v=Zn9LHIOi7zY
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
    //  R& K::operator ++();    -prefix
    //  R K::operator ++(int);  -postfix
        Fixed&  operator++();
        Fixed   operator++(int);
        Fixed&  operator--();
        Fixed   operator--(int);
    //  public overloaded member
        static const Fixed   &min(const Fixed &a, const Fixed &b);
        static Fixed   &min(Fixed &a, Fixed &b);
        static const Fixed   &max(const Fixed &a, const Fixed &b);
        static Fixed   &max(Fixed &a, Fixed &b);
    private:
        int                 _value;
        static const int    _exponentBits;
};

std::ostream    &operator<<(std::ostream &stream, const Fixed &value);
#endif