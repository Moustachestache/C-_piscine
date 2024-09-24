# include "PmergeMe.hpp"

listSort::listSort()
{

}

listSort::listSort(char **argv) : _list(), _list2()
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
        {
            _list.push_front(nBuffer);
            _list2.insert(nBuffer);
        }
    }
    //  let the (let the (let the (let the recusvity start) recusvity start) recusvity start) recusvity start
    std::cout << "before: ";
    displayList(_list);
    clock_t time = clock();
    sortList(_list);
    std::cout << "after: ";
    displayList(_list);
    std::cout << "execution time with std::list " << (100.0 * (clock() - time) / CLOCKS_PER_SEC) << " seconds" << std::endl;

    //  lets sort through a set
    time = clock();
    std::cout << "before: ";
    displaySet(_list2);
    sortSet(_list2);
    std::cout << "after: ";
    displaySet(_list2);
    std::cout << "execution time with std::set  " << (100.0 * (clock() - time) / CLOCKS_PER_SEC) << " seconds" << std::endl;
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

void    listSort::sortList(std::list<int> &toSort)
{
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
        left.insert(left.begin(), toSort.begin(), middle);
        right.insert(right.begin(), middle, toSort.end());
    }
    //  2   recursively keep dividing until we have only two nb left
    if (left.size() > 1)
        sortList(left);
    if (right.size() > 1)
        sortList(right);
    //  3   swap values if need to be swapped
    if (left.front() > right.front())
        std::swap(left, right);
    //  4   insert back into x
    left.merge(right);
    toSort = left;
}

void    listSort::sortSet(std::set<int> &toSort)
{
    //  get middle iterator
    std::set<int>::iterator  middle = toSort.begin();
    for (size_t i = 0; i < toSort.size() / 2; i++)
        middle++;

    //  get middle iterator

    //  1   divide whats left in two back into this function
    //  template <class InputIterator>  set (InputIterator first, InputIterator last,       const key_compare& comp = key_compare(),       const allocator_type& alloc = allocator_type());
    std::set<int>  left(toSort.begin(), middle);
    std::set<int>  right(middle, toSort.end());

    //  2   recursively keep dividing until we have only two nb left
    if (left.size() > 1)
        sortSet(left);
    if (right.size() > 1)
        sortSet(right);

    //  3   swap values if need to be swapped
    if (left > right)
        std::swap(left, right);

    //  4   insert back into x
    left.insert(right.begin(), right.end());
    toSort = left;
}

//  debug
void    listSort::displayList(std::list<int> list)
{
    for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void    listSort::displaySet(std::set<int> list)
{
    for (std::set<int>::iterator it = list.begin(); it != list.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}