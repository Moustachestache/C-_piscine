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

static void   toChar(const std::string &thing)
{
    int retVal;

    retVal = std::atoi(thing.c_str());
    if (!std::isprint(retVal))
    {
        std::cout << "char: invalid value" << std::endl;
        return ;
    }
    std::cout << "char: \"" << static_cast<char>(retVal)<< "\"" << std::endl;
}

static void     toInt(const std::string &thing)
{
    long int retVal;

    retVal = std::atoll(thing.c_str());
    if (retVal >= INT_MAX)
    {
        std::cout << "int: wow there cowboy thats a big number" << std::endl;
        return ;
    }
    else if (thing.c_str()[0] != '0' && retVal == 0 && thing.size() == 1)
    {
        std::cout << "int: invalid value" << std::endl;
        return ;
    }
    std::cout << "int: " << static_cast<int>(retVal) << std::endl;
}

static void   toFloat(const std::string &thing)
{
    float retVal;

    if (!thing.compare("-inff"))
    {
        std::cout << "float: -inff" << std::endl;
        return;
    }
    else if (!thing.compare("+inff"))
    {
        std::cout << "float: +inff" << std::endl;
        return;
    }
    else if (!thing.compare("nanf"))
    {
        std::cout << "float: nanf" << std::endl;
        return;
    }
    retVal = std::atof(thing.c_str());
    std::cout << "float: " << retVal << std::endl;
}

static void  toDouble(const std::string &thing)
{
    double retVal;

    if (!thing.compare("-inf"))
    {
        std::cout << "double: -inf" << std::endl;
        return;
    }
    else if (!thing.compare("+inf"))
    {
        std::cout << "double: +inf" << std::endl;
        return;
    }
    else if (!thing.compare("nan"))
    {
        std::cout << "double: +inf" << std::endl;
        return;
    }
    retVal = std::atof(thing.c_str());
    std::cout << "double: " << retVal << std::endl;
}

void    ScalarConverter::convert(const std::string thing)
{

    std::cout << ">>> input: " << thing << std::endl;
    toChar(thing);
    toInt(thing);
    toFloat(thing);
    toDouble(thing);
    std::cout << std::endl;
}
