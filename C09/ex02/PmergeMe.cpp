# include "PmergeMe.hpp"

listSort::listSort()
{

}

listSort::listSort(char **argv) : _list()
{
    //  add to list
    int     nBuffer = 0;
    for (int i = 0; argv[i] != NULL; i++)
    {
        nBuffer = std::atoi(argv[i]);
        //  check and remove dupes
        if (_hasDuplicates(_list, nBuffer))
            std::cout << "error: " << nBuffer << " already exists in list: disregarding input." << std::endl;
        else
            _list.push_front(std::atoi(argv[i]));
    }
    //  self call
    sort(_list);
}

bool    listSort::_hasDuplicates(std::list<int> list, int j)
{
    for (std::list<int>::iterator   it = list.begin(); it != list.end(); it++)
    {
        if (*it == j)
            return 1;
    }
    return 0;
}

listSort::listSort(listSort &obj) : _list(obj._list)
{
}

listSort &listSort::operator=(listSort &src)
{
    _list = src._list;
    return *this;
}

listSort::~listSort()
{

}

void    listSort::sort(std::list<int> &toSort)
{
    //  display list
    displayList(toSort);

    //  recursive:
    std::list<int>  left;
    std::list<int>  right;

    //  get middle iterator
    std::list<int>::iterator  middle = toSort.begin();
    for (size_t i = 0; i < toSort.size() / 2; i++)
        middle++;

    //  1   divide whats left in two back into this function
    if (toSort.size() > 1)
    {
        toSort.splice(left.begin(), toSort, toSort.begin(), middle);
        toSort.splice(right.begin(), toSort, middle, toSort.end());
    }
    //  debug
    displayList(left);
    displayList(right);
    std::cout << left.size() << " : " << right.size() << " : " << toSort.size() << std::endl;
    //  2   recursively keep dividing until we have only two nb left
    if (left.size() > 1)
    {
        sort(left);
        
    }
    if (right.size() > 1)
        sort(right);

    //  3   swap values if need to be swapped
    //  4   merge back and insert where it should be in CURRENT list
}

//  debug
void    listSort::displayList(std::list<int> list)
{
    std::cout << "displaying list at: " << &list << " size: " << list.size() << std::endl;
    for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
    {
        std::cout << *it << " " << std::endl;
    }
}