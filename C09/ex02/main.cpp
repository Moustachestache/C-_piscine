# include "PmergeMe.hpp"

int     main(int ac, char *argv[])
{
    if (ac == 1)
    {
        std::cout << "error: no input" << std::endl << argv[0] << " `shuf -i 1-100000 -n 3000 | tr \'\\n\' \' \'`" << std::endl;
        exit(1);
    }
    
    //  std::list
    listSort    list(argv + 1);
}