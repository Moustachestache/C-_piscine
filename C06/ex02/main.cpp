/* Implement a Base class that has a public virtual destructor only. Create three empty
classes A, B and C, that publicly inherit from Base.
These four classes don’t have to be designed in the Orthodox
Canonical Form.
Implement the following functions:
Base * generate(void);
It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
to use anything you like for the random choice implementation.
void identify(Base* p);
It prints the actual type of the object pointed to by p: "A", "B" or "C".
void identify(Base& p);
It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
inside this function is forbidden.
Including the typeinfo header is forbidden. */

# include "classes.hpp"
# include <iostream>
# include <unistd.h>
# include <cstdlib>


Base    *generate(void)
{
    int randoBando = rand() % 3;

    switch(randoBando)
    {
        case 0:
            return new A;
        case 1:
            return new B;
        case 2:
            return new C;
    }

    //  silences warnings
    return new Base;
}

void    identify(Base *p)
{
    try
    {
        dynamic_cast<A&>(*p);
		std::cout << "Type is : A" << std::endl;
        return ;
    }
    catch( ... ){}
    try
    {
        dynamic_cast<B&>(*p);
		std::cout << "Type is : B" << std::endl;
        return ;
    }
    catch( ... ){}
    try
    {
        dynamic_cast<C&>(*p);
		std::cout << "Type is : C" << std::endl;
        return ;
    }
    catch( ... ){}
    
}

void    identify(Base &p)
{
    identify(&p);
}

int     main( void )
{
    Base *ptr;

    std::cout << "\r\nstarting tester in 3 seconds \npress ctrl + c to stop" << std::endl;
    sleep(3);

    while (1)
    {
        ptr = generate();
        identify(*ptr);
        identify(ptr);

        delete ptr;

        std::cout << "resuming in 2 second ...\r\n" << std::endl;
        sleep(2);
    
    }
}