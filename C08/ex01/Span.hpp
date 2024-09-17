# pragma once

# include <algorithm>
# include <vector>
# include <exception>
# include <iterator>
# include <iostream>
# include <unistd.h>

class Span
{
    public:
        Span();
        Span(unsigned int maxInt);
        Span(const Span &obj);
        Span &operator=(const Span &src);
        ~Span();

        //  to add a single number to the Span.
        //  It will be used in order to fill it. 
        //  Any attempt to add a new element if there are already N elements stored should throw an exception.
        void    addNumber(int n);
        void    fill(void);

        //  debug
        void    display( void );

        //  an exception.
        class   SpanSizeOverloadException : public std::exception
        {
            public:
                virtual const char* what( void ) const throw();
        };

        //  implement two member functions: shortestSpan() and longestSpan()
        //  They will respectively find out the shortest span or the longest span (or distance, if you prefer) between all the numbers stored, and return it.
        //  If there are no numbers stored, or only one, no span can be found. Thus, throw an exception.
        int     shortestSpan(void);
        int     longestSpan(void);

    private:
        unsigned int        _maxInt;
        std::vector <int>   _intVector;
};