# include "Bureaucrat.hpp"
# include "AForm.hpp"

int main(void)
{
    try
        {
			//	create
			std::cout << ">>> Bureaucrats : " << std::endl;
            Bureaucrat  jebediah(5);
            Bureaucrat  george("Giorgyi Bureaucratenko");

			std::cout << ">>> Forms : " << std::endl;
            AForm  *test;
			AForm	form;
			AForm	form1(1, 1);
			AForm	form2(150, 150);
			test = new AForm();
			delete test;

			//	output
			std::cout << ">>> information : " << std::endl;
			std::cout << jebediah << std::endl;
			std::cout << george << std::endl;

			std::cout << form1 << std::endl;
			std::cout << form2 << std::endl;

			//	sign
			std::cout << ">>> Signing : " << std::endl;
			form1.beSigned(george);
			form2.beSigned(george);

			//	output, this time signed
			std::cout << ">>> information (this time, signed) : " << std::endl;
			std::cout << form1 << std::endl;
			std::cout << form2 << std::endl;

			//	errors
			//	form level < 1
			//	Form	wrongForm(0, 1);
			//	sign with insufficient level (jebediah is lv 5, the form needs lv 1)
        }
    catch (std::exception & e)
        {
		    std::cerr << e.what() << std::endl;
        }
}