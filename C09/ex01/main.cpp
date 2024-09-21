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
    std::string     thingToMath;
    if (ac != 2)
    {
        std::cout << "warning: not enough arguments\nuse " << argv[0] << " [reverse polish notation]\nproceeding with default ..." << std::endl;
        thingToMath = "13+4*51*/6-9+";
    }
    else
        thingToMath = argv[1];

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