# pragma once
# include <iostream>

class ScalarConverter
{
    public:
        static void convert(char *thing);

    protected:
        ScalarConverter();
        ScalarConverter(ScalarConverter &obj);
        ScalarConverter &operator=(ScalarConverter &cpy);
        ~ScalarConverter();
};