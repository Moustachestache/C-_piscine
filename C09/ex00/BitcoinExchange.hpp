# pragma once

# include <iostream>
# include <vector>
# include <exception>
# include <iostream>
# include <fstream>
# include <stdlib.h>
# include <time.h>
# include <ctime>
# include <stdlib.h>

struct tm       strToUnix(std::string date);
std::string     unixToStr(long long date);

class BitcoinExchange
{
    public:
        struct  dataSet {
            std::string     date;
            struct tm       unixDate;
            time_t          t_unixDate;
            float           rate;
        };

        BitcoinExchange();
        BitcoinExchange(const std::string &filename);
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange &operator=(const BitcoinExchange &src);
        ~BitcoinExchange();

        void    buildBuffer(dataSet &buffer, char separator);
        void    validateInput(void);
        void    listValues(void);


    //  errors
    class InputErrorException : public std::exception
    {
        public:

            virtual const char* what() const throw();
    };

    class InputErrorNumberTooBigException : public std::exception
    {
        public:

            virtual const char* what() const throw();
    };

    class InputErrorNumberTooNegativeException : public std::exception
    {
        public:

            virtual const char* what() const throw();
    };

    class DatabaseFileOpenException : public std::exception
    {
        public:
            virtual const char* what(void) const throw();
    };

    class InputFileException : public std::exception
    {
        public:
            virtual const char* what(void) const throw();
    };

    private:
        std::string             _filename;
        std::vector <dataSet>   dataBase;
        std::vector <dataSet>   inputData;
};