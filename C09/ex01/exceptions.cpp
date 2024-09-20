# include "RPN.hpp"

const char* RPN::UnexpectedInputException::what() const throw()
{
    return "fatal: unexpected input in operation";
}