/*  Create a program that takes three parameters in the following order: a filename and two strings, s1 and s2.
It will open the file <filename> and copies its content into a new file <filename>.replace, replacing every occurrence of s1 with s2.
Using C file manipulation functions is forbidden and will be considered cheating. All the member functions of the class std::string are allowed, except replace. Use them wisely!
Of course, handle unexpected inputs and errors. You have to create and turn in your own tests to ensure your program works as expected.*/

#include "main.hpp"

int main(int argc, char **argv)
{
    if (argc != 4 || argv[1] == "" || argv[2] == "") 
    {
        std::cout << "Invalid Arguments." << std::endl << "Usage: " << argv[0] << " [file] [string to replace] [new string]" << std::endl;
        return (1);
    }

    //  variables
    std::ifstream input(argv[1]);
    std::string ostreamName(argv[1]);
    std::ofstream output(ostreamName.append(".replace"));
    std::string buffer;
    
    //  input using
    //  output using

    output << "caca";
    //  readloop that prints
}