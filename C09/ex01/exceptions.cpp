# include "RPN.hpp"

const char* RPN::UnexpectedInputException::what() const throw()
{
    return "fatal: unexpected input in operation";
}

const char* RPN::DivideByZeroException::what() const throw()
{
    return "fatal: division by zero";
}

const char* RPN::ExpectedOperandError::what() const throw()
{
    return "fatal: no operator to use";
}

