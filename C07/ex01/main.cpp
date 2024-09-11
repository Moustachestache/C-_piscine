# include <iostream>
# include "Templates.hpp"

static void    testFunction( int &i )
{
    i = 0;
}

static void    displayFunction( int &i )
{
    std::cout << "[" << i << "]";
}

int main(void)
{
    std::cout << "TEST ON INTs:" << std::endl;
    int     array[10] = {1,2,3,4,5,6,7,8,9,10};
    //  void    iter (T *array, S size, F (*function)(T &val))
    ::iter(array, 10, displayFunction);
    std::cout << std::endl;
    ::iter(array, 10, testFunction);
    std::cout << std::endl;
    ::iter(array, 10, beepboop<int>);
    std::cout << std::endl;

    std::cout << std::endl << "TEST ON CHARS:" << std::endl;
    char     array2[10] = {'a', 'b', 'c', 'd', 'f', 'e', 't', '1', '2', 'x'};
    //  void    iter (T *array, S size, F (*function)(T &val))
    ::iter(array2, 10, beepboop<char>);
    std::cout << std::endl;

    std::cout << std::endl << "TEST ON std::string:" << std::endl;
    std::string    array3[6] = {"jean", "gerard", "miguel de la roca", "edouard balladur", "jeremie de paimpol", "fin de liste"};
    //  void    iter (T *array, S size, F (*function)(T &val))
    ::iter(array3, 6, beepboop<std::string>);
    std::cout << std::endl;
}