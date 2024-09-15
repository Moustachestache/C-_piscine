# include "Span.hpp"

Span::Span( void ) : _maxInt(0), _intVector(0)
{

}

Span::Span(unsigned int maxInt) : _maxInt(maxInt), _intVector(0)
{

}

Span::Span(const Span &obj) : _intVector(obj._intVector)
{
    _maxInt = obj._maxInt;
}

Span &Span::operator=(const Span &src)
{
    _maxInt = src._maxInt;
    _intVector = src._intVector;
    return *this;
}

Span::~Span()
{
    std::cout << "~Span() (" << this << ")" << std::endl;
    std::cout << "size:     " << _intVector.size() << std::endl;
    std::cout << "max int:  " << _maxInt << std::endl;
}

const char *Span::SpanSizeOverloadException::what( void ) const throw()
{
    return ("Span Size Overload");
}

void    Span::fill(void)
{
    srand(getpid());
    _intVector.insert(_intVector.begin(), _maxInt, rand());
}

static void printNum(int n)
{
    std::cout << n << std::endl;
}

void    Span::display( void )
{
    std::for_each(_intVector.begin(), _intVector.end(), printNum);
}

void    Span::addNumber(int n)
{
    if (_intVector.size() == _maxInt)
        throw SpanSizeOverloadException();
    else
        _intVector.push_back(n);
}

//  find highest and lowest and get difference?
int     Span::shortestSpan(void)
{
    if (_intVector.size() < 2)
        throw SpanSizeOverloadException();
    int lowest = *_intVector.begin();
    int lastLowest = 0;

    //  aaaaaaaaaaa
    for (std::vector<int>::iterator it = _intVector.begin(); it < _intVector.end(); ++it)
    {
        if (lowest > *it)
        {
            lastLowest = lowest;
            lowest = *it;
        }
    }
    std::cout << "shortestSpan: " << lowest - lastLowest << "(" << lastLowest << " - " << lowest << ")" << std::endl;
    return lastLowest - lowest;
}

int     Span::longestSpan(void)
{
    if (_intVector.size() < 2)
        throw SpanSizeOverloadException();
    int lowest = *_intVector.begin();
    int highest = *_intVector.end();

    //  aaaaaaaaaaa
    for (std::vector<int>::iterator it = _intVector.begin(); it < _intVector.end(); ++it)
    {
        if (lowest > *it)
            lowest = *it;
        if (highest < *it)
            highest = *it;
    }
    std::cout << "longestSpan: " << highest - lowest << "(" << lowest << " -> " << highest << ")" << std::endl;
    return highest - lowest;
}
