# include <iostream>
# include <unistd.h>
# include <cstdlib>
# include "Templates.hpp"

int main(void)
{
    std::string e = "hehe hihi hoho";
    std::string f = "ca me chatouille la bidouille";    
    // std::string
    std::cout << "str :  e = " << e << ", f = " << f << " [max: " << max(e, f) << "] [min: " << min(e, f) << "]" << std::endl;
    std::cout << "swap:  [pre:  " << e << "(" << &e << ") " << f << " (" << &f << ")" << "]\n";
    swap(e, f);
    std::cout << "       [post: " << e << "(" << &e << ") " << f << " (" << &f << ")" << "]\n" << std::endl;

    /* int a = rand() % 1000;
    int b = rand() % 1000;

    double c = (rand() / a);
    double d = (rand() / b);

    std::string e = "hehe hihi hoho";
    std::string f = "ca me chatouille la bidouille";

    //  aaaaahhhh
    //  pourquoi max() vs ::max

    //  int
    std::cout << "int:   a = " << a << ", b = " << b << " [max: " << max(a, b) << "] [min: " << min(a, b) << "]" << std::endl;
    std::cout << "swap:  [pre:  " << a << "(" << &a << ") " << b << " (" << &b << ")" << "]\n";
    swap(a, b);
    std::cout << "       [post: " << a << "(" << &a << ") " << b << " (" << &b << ")" << "]\n" << std::endl;

    // double
    std::cout << "double: c = " << c << ", d = " << d << " [max: " << max(c, d) << "] [min: " << min(c, d) << "]" << std::endl;
    std::cout << "swap:  [pre:  " << c << "(" << &c << ") " << d << " (" << &d << ")" << "]\n";
    swap(c, d);
    std::cout << "       [post: " << c << "(" << &c << ") " << d << " (" << &d << ")" << "]\n" << std::endl;

    // std::string
    std::cout << "str :  e = " << e << ", f = " << f << " [max: " << ::max(e, f) << "] [min: " << ::min(e, f) << "]" << std::endl;
    std::cout << "swap:  [pre:  " << e << "(" << &e << ") " << f << " (" << &f << ")" << "]\n";
    ::swap(e, f);
    std::cout << "       [post: " << e << "(" << &e << ") " << f << " (" << &f << ")" << "]\n" << std::endl;

    //  code from subject
    a = 2;
    b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    e = "chaine1";
    f = "chaine2";
    ::swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl; */
} 