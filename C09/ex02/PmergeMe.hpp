# pragma once
# include <list>
# include <iostream>
# include <cstdlib>

class listSort
{
    public:
        listSort();
        listSort(char **argv);
        listSort(listSort &obj);
        listSort &operator=(listSort &src);
        ~listSort();
        void    sort(std::list<int> &toSort);
        void    merge(std::list<int> &toSort);
        //  debug
        void    displayList(std::list<int> list);
    private:
        bool    _hasDuplicates(std::list<int>, int j);
        std::list<int>   _list;
};