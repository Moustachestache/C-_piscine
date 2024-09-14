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
# include <map>
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
        throw ValueNonExistantE;
    
    return  *iterator;
}

template <typename T>
void    populateRand(T &haystack)
{
    srand(time());
    for (long unsigned int i = 0; i < haystack.size(); i++)
    {
        haystack.insert(rand() % 1000);
    }
}