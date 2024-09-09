# pragma once
# include <iostream>
# include <limits.h>
# include <cstdlib>

class ScalarConverter
{
    public:
        static void convert(const std::string thing);

    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter &obj);
        ScalarConverter &operator=(ScalarConverter &cpy);
        ~ScalarConverter();
};