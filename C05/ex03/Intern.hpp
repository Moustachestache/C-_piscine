# pragma once
# include "main.hpp"

class Intern {
    public:
        //  Default
        Intern();
        Intern(Intern &obj);
        Intern &operator=(Intern &src);
        ~Intern();

        //  etc.
        AForm*  makeForm(std::string name, std::string target);
        int     getCase(std::string name);
};