#include "Bureaucrat.hpp"

//  re: stolen from webserv

/* 	try
	{
		data.parseFile( av[1] );
		//std::cout << data.getServerStrDebug() << std::flush; // debug: print the parsed values
		data.startAllServers();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	} */

int main(void)
{
    try
        {
            Bureaucrat  jebediah;
            Bureaucrat  oops(0);
        }
    catch (std::exception & e)
        {
		    std::cerr << e.what() << std::endl;
        }
}