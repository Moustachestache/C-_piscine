#include "main.class.hpp"

int main(int argc, char *argv[])
{
    Harl Harl;
    std::string complain = "debug";

    if (argc != 2)
        return 69;
    Harl.complain(argv[1]);
    return 0;
}