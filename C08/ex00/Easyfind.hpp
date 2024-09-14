/*

Assuming T is a container of integers, this function has to find the first occurrence
of the second parameter in the first parameter.

If no occurrence is found, you can either throw an exception or return an error value
of your choice.

If you need some inspiration, analyze how standard containers behave.
Of course, implement and turn in your own tests to ensure everything works as expected.

*/

# pragma once
# include <iostream>
# include <algorithm>
# include <stdlib.h>
# include <vector>
# include <deque>
# include <list>

class	ValueNonExistantE : public std::exception
{
    public:
        virtual const char* what( void ) const throw();
};

template <typename T>
int   &easyfind(T &haystack, int needle)
{
    typename T::iterator iterator = find(haystack.begin(), haystack.end(), needle);

    if (iterator == haystack.end())
        throw   ValueNonExistantE();
    else
        return  *iterator;
}

template <typename T, typename NUM>
void    populateRand(T &haystack, NUM val)
{
    if (val <= 0)
        return ;
    srand(rand());
    std::cout << "populating container ..." << std::endl;
    for (int i = 0; i < val; i++)
        haystack.push_back(rand() % 1000);
}

template <typename T>
void    catchWrapper(T &haystack, int needle)
{
    try
    {
        int *val = &easyfind(haystack, needle);
        std::cout << "found occurence of " << needle << " at " << val << " (val: " << *val << ")" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}