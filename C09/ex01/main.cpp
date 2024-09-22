# include "RPN.hpp"

int     isNum(char c)
{
    if (c == '1' ||
        c == '2' ||
        c == '3' ||
        c == '4' ||
        c == '5' ||
        c == '6' ||
        c == '7' ||
        c == '8' ||
        c == '9' ||
        c == '0')
        return 1;
    return 0;
}

int     isOperand(char c)
{
    if (c == '+' ||
        c == '-' ||
        c == '*' ||
        c == '/')
        return 1;
    return 0;
}

int main(int ac, char *argv[])
{
    if (ac != 2)
    {
        std::cout << "fatal: not enough arguments\nuse " << argv[0] << " [reverse polish notation]" << std::endl;
        return 1;
    }
    std::string     thingToMath(argv[1]);
    if (thingToMath.length() == 0)
    {
        std::cout << "fatal: empty string\nuse " << argv[0] << " [reverse polish notation]" << std::endl;
        return 1;
    }
    try
    {
        RPN     operation(thingToMath);

        operation.operate();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}