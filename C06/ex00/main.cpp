# include "ScalarConverter.hpp"

int main(void)
{
    std::string input;

    while (1)
    {
        std::cout << "commands: [quit] [beans] [random]\r\ninput scalar to convert:" << std::endl;
        std::cin >> input;
        if (!input.compare("beans"))
        {
            input = "420.69";
            std::cout << "      ████████                          \n    ██▒▒▒▒▒▒▒▒▒▒██                      \n  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒██                    \n██▒▒▒▒▒▒▒▒    ▒▒▒▒▒▒██                  \n██▒▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒▒██                \n██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████            \n██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██        \n██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n      ████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n          ████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n              ████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n                  ████████████████      " << std::endl;
        }
        else if (!input.compare("random"))
        {
            input = rand();
        }
        else if (!input.compare("quit"))
        {
            exit(1);
        }
        ScalarConverter::convert(input);
    }
}
/*  // tests
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
*/