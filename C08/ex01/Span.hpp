# pragma once

# include <algorithm>
# include <vector>

class Span
{
    public:
        Span();
        Span(unsigned int maxInt);
        Span(Span &obj);
        Span &operator=(Span &src);
        ~Span();

        //  to add a single number to the Span.
        //  It will be used in order to fill it. 
        //  Any attempt to add a new element if there are already N elements stored should throw an exception.
        void    addNumber(int n);

        //  implement two member functions: shortestSpan() and longestSpan()
        //  They will respectively find out the shortest span or the longest span (or distance, if you prefer) between all the numbers stored, and return it.
        //  If there are no numbers stored, or only one, no span can be found. Thus, throw an exception.
        int     shortestSpan(void);
        int     longestSpan(void);

    private:
        unsigned int        _maxInt;
        std::vector <int>   _intVector;
};