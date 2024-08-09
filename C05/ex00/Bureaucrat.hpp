#include <iostream> 
#include <string>

class Bureaucrat {
    public:
        //  default
        Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &src);
        ~Bureaucrat();

        //  overload
        Bureaucrat &operator<<(const Bureaucrat &src);

        //  getters
        std::string getName( void );
        unsigned char getGrade( void );

        //  functions
        void    promote(unsigned char val);
        void    demote(unsigned char val);
    protected:
        const std::string   name;
        unsigned char       grade;
};