# include "RPN.hpp"

RPN::RPN(std::string &operation) : _input(operation)
{
    char    buffer = 0;
    std::cout << "solving: " << _input << std::endl;
    while (operation.length() > 0)
    {
        buffer = operation.at(0);
        if (isNum(buffer))
            _container.push(buffer - 48);
        else if (isOperand(buffer))
            _container.push(buffer);
        else if (buffer != ' ')
            throw UnexpectedInputException();
        operation.erase(0, 1);
    }
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
    char                operand = 0;
    double  n1 = 0;
    double  n2 = 0;
    std::queue<double>  temp;

    while (_container.size() > 2)
    {
        n1 = _container.front();
        _container.pop();
        n2 = _container.front();
        _container.pop();
        while (!isOperand(_container.front()))
        {
            temp.push(n1);
            n1 = n2;
            n2 = _container.front();
            _container.pop();
        }
        operand = _container.front();
        _container.pop();
        if (!isOperand(operand))
            throw ExpectedOperandError();
        temp.push(_operateCurrent(n1, n2, operand));
        while (_container.size())
        {
            temp.push(_container.front());
            _container.pop();
        }
        _container = temp;
        while (!temp.empty())
            temp.pop();
    }
    if (_container.size() > 1)
        std::cout << "error: n operand doesnt match n values" << std::endl;
    else
        std::cout << "result is : " << _container.front() << std::endl;
}

double  RPN::_operateCurrent(double n1, double n2, char operand)
{
    double  result = 0;
    if (operand == '+')
        result = n1 + n2;
    else if (operand == '-')
        result = n1 - n2;
    else if (operand == '*')
        result = n1 * n2;
    else if (operand == '/')
    {
        if (n1 == 0 || n2 == 0)
            throw DivideByZeroException();
        result = n1 / n2;
    }
    return result;
}

//  get stuffed, nerd!
RPN::RPN()
{
    
}