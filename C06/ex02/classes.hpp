# pragma once 
# include <iostream>

class Base
{
    public:
        virtual ~Base(){};
};

class A : public Base
{
    public:
        A(){std::cout << "(secretely, generated an A class, shhhh)" << std::endl;};
        ~A(){};
};

class B : public Base
{
    public:
        B(){std::cout << "(secretely, generated a B class, shhhh)" << std::endl;};
        ~B(){};
};

class C : public Base
{
    public:
        C(){std::cout << "(secretely, generated a C class, shhhh)" << std::endl;};
        ~C(){};
};