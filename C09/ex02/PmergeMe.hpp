# pragma once
# include <list>
# include <iostream>
# include <cstdlib>
# include <set>
# include <iomanip>
# include <sys/time.h>

class listSort
{
    public:
        listSort();
        listSort(char **argv);
        listSort(listSort &obj);
        listSort &operator=(listSort &src);
        ~listSort();

        //  list
        void    sortList(std::list<int> &toSort);
        void    merge(std::list<int> &toSort);
        //  set
        void    sortSet(std::set<int> &toSort);

        //  debug
        void    displayList(std::list<int> list);
        void    displaySet(std::set<int> list);
        
    private:
        bool    _hasDuplicates(std::list<int>, int j);
        std::list<int>  _list;
        std::set<int>   _list2;
};