#include <iostream>
#include <stdlib.h>
#include "Array.hpp"

int main(void)
{
/*************
std::string */
    //  array of strings
    Array<std::string>   stringo(15);

    //  accessing with [] operator to add info
    stringo[0] = "coucou les loulous!";
    stringo[14] = "coucou les louloutes!";

    //  creating error (200 is out of bounds!)
    try
    {
        stringo[200] = "erroritos!";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    //  displaying info
    stringo.runThrough();

/*************
float ????? */
    double  indexChiant = 12.34200000;
    Array<float>   floato(indexChiant + 1);
    floato[0] = rand();
    floato[5] = 69.420;
    //  floato["technically this works too?"];
    //  no it dont
    floato[indexChiant] = rand();
    try
    {
        floato[200] = 1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    floato.runThrough();

/*************
Array ????? */
    Array<u_long>   potato(5000);
    potato[0] = rand();
    potato[5] = 2222222222222222;
    potato[indexChiant] = rand();
    try
    {
        potato[5000 - 1] = 69;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    potato.runThrough();
}

/*
//  main.cpp from intra
#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
*/
