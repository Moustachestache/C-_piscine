/*  Create a program that takes three parameters in the following order: a filename and two strings, s1 and s2.
It will open the file <filename> and copies its content into a new file <filename>.replace, replacing every occurrence of s1 with s2.
Using C file manipulation functions is forbidden and will be considered cheating. All the member functions of the class std::string are allowed, except replace. Use them wisely!
Of course, handle unexpected inputs and errors. You have to create and turn in your own tests to ensure your program works as expected.*/

#include "main.hpp"

int writeError(std::string error, char *arg)
{
    std::cout << "Error: " << error << std::endl << "Usage: " << arg << " [file] [string to replace] [new string]" << std::endl;
    return (1);
}

int main(int argc, char **argv)
{
    if (argc != 4 || argv[1] == "" || argv[2] == "") 
        return writeError("Invalid Arguments", argv[0]);

    //  variables
    std::ifstream input(argv[1]);
    if (!input.good())
        return writeError("Error Opening Input File", argv[0]);
    std::string ostreamName(argv[1]);
    std::ofstream output(ostreamName.append(".replace"));
    if (!output.good())
        return writeError("Error Creating Output File", argv[0]);
    std::string buffer;
    
    //  getline
    getline(input, buffer);
    if (buffer.size() == 0)
        return writeError("Input File Is Empty", argv[0]);

    //  main loopy-loop
    std::string cleanedBuffer;
    std::string needle = argv[2];
    std::string replacement = argv[3];
    while (getline(input, buffer))
    {
        {
            for (int i = 0; buffer[i]; i++)
                std::cout << buffer[i];
        }
 //       output << cleanedBuffer << std::endl;
    }
    input.close();
    output.close();
}