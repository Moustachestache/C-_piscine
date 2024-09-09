# include "ScalarConverter.hpp"

int main(void)
{
    // ok
    ScalarConverter::convert("32");
    ScalarConverter::convert("0");
    ScalarConverter::convert("1234");
    ScalarConverter::convert("-1234");
    ScalarConverter::convert("1.145");
    ScalarConverter::convert("-inff");
    ScalarConverter::convert("inf");
    ScalarConverter::convert("nan");
    ScalarConverter::convert("nanf");
    ScalarConverter::convert("111111111111111111111");
}