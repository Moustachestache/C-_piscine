# include "Easyfind.hpp" 


//  err
const char *ValueNonExistantE::what( void ) const throw()
{
	return ("value doesnt exist in container");
}


int main(void)
{
    int     needle = 69;

    std::cout << std::endl << "std::vector" << std::endl;
    std::vector<int>      haystack1;
    populateRand(haystack1, 200);
    catchWrapper(haystack1, needle);

    std::cout << std::endl << "std::vector" << std::endl;
    std::vector<int>      haystack2;
    populateRand(haystack2, 200);
    catchWrapper(haystack2, needle);

    std::cout << std::endl << "std::list" << std::endl;
    std::list<int>      haystack3;
    populateRand(haystack3, 200);
    catchWrapper(haystack3, needle);

    std::cout << std::endl << "std::deque" << std::endl;
    std::deque<int>          haystack4;
    populateRand(haystack4, 200);
    catchWrapper(haystack4, needle);

    //  force find lol
    std::cout << std::endl << "successful test" << std::endl;
    haystack1.push_back(needle);
    catchWrapper(haystack1, needle);
}