# include "Easyfind.hpp" 


//  err
const char *ValueNonExistantE::what( void ) const throw()
{
	return ("value doesnt exist in container");
}

int main(void)
{
    int                 containerSize = 200;
    int                 needle = 420;

    std::list<int>      haystack1(containerSize);
    populateRand(haystack1);

    std::cout << "found: " << easyfind(haystack1, needle);

}