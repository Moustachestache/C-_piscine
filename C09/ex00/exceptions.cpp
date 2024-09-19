# include "BitcoinExchange.hpp"

const char *BitcoinExchange::InputErrorException::what() const throw()
{
    return ("unexpected input");
}

const char *BitcoinExchange::InputErrorNumberTooBigException::what() const throw()
{
    return ("number too big");
}

const char *BitcoinExchange::InputErrorNumberTooNegativeException::what() const throw()
{
    return ("number too negative");
}

const char *BitcoinExchange::DatabaseFileOpenException::what(void) const throw()
{
    return ("failed opening database file");
}

const char *BitcoinExchange::InputFileException::what(void) const throw()
{
    return ("failed opening input file");
}