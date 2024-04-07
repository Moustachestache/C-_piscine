#include "Fixed.class.hpp"

int main( void )
{
    //  default constructor
    Fixed a;

    //  copy constructor
    Fixed b( a );

    //  default again
    Fixed c;

    //  copy assignment 
    c = b;


    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}
//  expected    result
/*
Default constructor called
Copy constructor called
Copy assignment operator called // <-- This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Copy assignment operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called*/