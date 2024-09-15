# include "Span.hpp"

int     main(void)
{
    Span    test(50000);
    test.fill();
    test.display();

    //  err:
    try
    {
        test.addNumber(420);
    }
    catch ( ... )
    {
        std::cout << "woops" << std::endl;
    }

    test.shortestSpan();
    test.longestSpan();

    std::cout << "fin." << std::endl;
}

/* int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
} */