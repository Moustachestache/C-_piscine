# include "ScalarConverter.hpp"

//  non instantiable
ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter &obj)
{
    (void) obj;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &cpy)
{
    (void) cpy;
    return *this;
}

ScalarConverter::~ScalarConverter()
{

}

/* Write a class ScalarConverter that will contain only one static method "convert"
that will takes as parameter a string representation of a C++ literal in its most common
form and output its value in the following serie of scalar types :
• char
• int
• float
• double */
//      https://zestedesavoir.com/tutoriels/553/les-conversions-de-types-en-c/
void    ScalarConverter::convert(char *thing)
{
    std::cout << "converting " << thing << std::endl;
    std::cout << "char: " << static_cast<char*>(thing) << std::endl;
    std::cout << "int: " << static_cast<int*>(thing) << std::endl;
    std::cout << "float: " << static_cast<float*>(thing) << std::endl;
    std::cout << "double: " << static_cast<double*>(thing) << std::endl;
}