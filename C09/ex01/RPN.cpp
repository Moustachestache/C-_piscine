# include "RPN.hpp"

RPN::RPN(std::string &operation) : _input(operation)
{
    char    buffer = 0;
    while (operation.length() > 0)
    {
        buffer = operation.at(0);
        operation.erase(0, 1);
        if (isNum(buffer))
        {
            _container.push(buffer - 48);
            std::cout << "debug: number is " << buffer - 48 << std::endl;
        }
        else if (isOperand(buffer))
        {
            _container.push(buffer);
            std::cout << "debug: operand is " << buffer << std::endl;
        }
        else if (buffer == ' ')
        {
            //  ok mdr
        }
        else
            throw UnexpectedInputException();
    }
    std::cout << "parsing complete ..." << std::endl;
    /* if isNum and isOperant and == ' ' (space) */

    //  AND valid argument 
    //_container = operation;
}

RPN::RPN(const RPN &obj)
{
    (void) obj;
}

RPN &RPN::operator=(const RPN &src)
{
    (void) src;
    return *this;
}

RPN::~RPN()
{

}

void    RPN::operate(void)
{
    double     result = _container.front();
    int     temp = 0;
    int     operand = 0;

    _container.pop();
    while (!_container.empty())
    {
        temp = static_cast<int>(_container.front());
        _container.pop();
        operand = _container.front();
        _container.pop();
        std::cout << "temp: " << static_cast<char>(temp) << std::endl;
        std::cout << "operand: " << static_cast<char>(operand) << std::endl;
        if (operand == '+')
            result += temp;
        else if (operand == '-')
            result -= temp;
        else if (operand == '/')
            result /= temp;
        else if (operand == '*')
            result *= temp;
        std::cout << "temp: " << result << std::endl;
    }
    std::cout << "result of " << _input << " is: " << result << std::endl;
}

//  get stuffed, nerd!
RPN::RPN()
{
    
}