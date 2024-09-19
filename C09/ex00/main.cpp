# include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
    std::string input;
    if (ac != 2)
    {
        std::cerr << "use " << av[0] << " databasefile.txt" << std::endl << "proceeding with default \"input.txt\" file ..." << std::endl;
        input = "input.txt";
    }
    else
        input = av[1];

    try
    {
        BitcoinExchange     btc(input);

        btc.listValues();
    }
    catch(const std::exception& e)
    {
        std::cerr << "error: " << e.what() << '\n';
    }
    
}