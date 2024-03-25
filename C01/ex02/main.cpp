#include <string>
#include <iostream>
/*Your program has to print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF.*/
int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    // content:
    std::cout  << std::endl << "no faf: "<< std::endl;
    std::cout << "str : " << str << std::endl;
    std::cout << "stringPTR : " << stringPTR << std::endl;
    std::cout << "stringREF : " << stringREF << std::endl;

    //  memaddress:
    std::cout  << std::endl << "memaddress : " << std::endl;
    std::cout << "str : " << &str << std::endl;
    std::cout << "stringPTR : " << &stringPTR << std::endl;
    std::cout << "stringREF : " << &stringREF << std::endl;

    //  value:
    std::cout  << std::endl << "values : " << std::endl;
    std::cout << "str : " << str << std::endl;
    std::cout << "stringPTR : " << *stringPTR << std::endl;
    std::cout << "stringREF : " << stringREF << std::endl;

    /*value:
    std::string str2 = "pipi poupou";
    &stringREF = str2;
    std::cout  << std::endl << "uhhhhh ??? : " << std::endl;
    std::cout << "str : " << str << std::endl;
    std::cout << "stringPTR : " << stringPTR << std::endl;
    std::cout << "stringREF : " << stringREF << std::endl;*/
    
}