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
			//	create
            Bureaucrat  jebediah;
            Bureaucrat  oops(1);
            Bureaucrat  george("Giorgyi Bureaucratenko");
            Bureaucrat  george2(jebediah);

			george2 = george;

			//	output
			std::cout << jebediah << std::endl;
			std::cout << oops << std::endl;
			std::cout << george << std::endl;
			std::cout << george2 << std::endl;

			//	catch errors
			//	1.	level too high
			oops.promote(1);
			//	2.	level too low
			//	george2.demote(1);
			//	3.	init level too high or too low
			//	Bureaucrat	naze(151);
			//	Bureaucrat	jopa(0);
        }
    catch (std::exception & e)
        {
		    std::cerr << e.what() << std::endl;
        }

		std::cout << "test" << std::endl;
}
