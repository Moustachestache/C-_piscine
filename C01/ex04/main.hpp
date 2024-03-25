#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 3 || argv[1] == "" || argv[2] == "")
    {
        std::cout << "Invalid Arguments." << std::endl << "Usage: " << argv[0] << " [file] [string to replace] [new string]"
    }
    for (std::string line; line.length(); )
}