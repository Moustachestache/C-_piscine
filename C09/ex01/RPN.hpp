# pragma once

# include <iostream>
# include <queue>

/* You must create a program with these constraints:
• The program name is RPN.
• Your program must take an inverted Polish mathematical expression as an argument.
• The numbers used in this operation and passed as arguments will always be less
than 10. The calculation itself but also the result do not take into account this rule.
• Your program must process this expression and output the correct result on the
standard output.
• If an error occurs during the execution of the program an error message should be
displayed on the standard error.
• Your program must be able to handle operations with these tokens: "+ - / *". */

/* todo:
- parse or validate (here error and checks)
- stack first in first out
- do */

int     isNum(char c);
int     isOperand(char c);

class RPN
{
    public:
        RPN();
        RPN(std::string &operation);
        RPN(const RPN &obj);
        RPN &operator=(const RPN &src);
        ~RPN();

        //  https://genius.com/Eminem-my-name-is-original-version-lyrics#:~:text=Dr.%20Dre%2C%20don%27t%20just%20stand%20there%2C%20operate!
        void    operate(void);
        int     validate(std::string &input);

    class UnexpectedInputException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    private:
        std::queue<char>    _container;
        std::string         _input;
};