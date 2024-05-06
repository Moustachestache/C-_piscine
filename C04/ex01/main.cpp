#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{/*
    const Animal *AnimalArray[100];

    for (int i = 0; i < 100; i++)
    {
        if (i < 50)
            AnimalArray[i] = new Dog;
        else
            AnimalArray[i] = new Cat;
        std::cout << "fuck you here are the thoughts of Animal number " << i + 1 << ::std::endl;
        AnimalArray[i]->writeIdeas();
    }
    for (int i = 0; i < 100; i++)
    {
        delete AnimalArray[i];
    }*/

    Dog *dog = new Dog();
    std::cout << "dog thoughts" << std::endl;
    dog->writeIdeas();
    std::cout << std::endl << "changing ideas" << std::endl;
    dog->rethinkIdeas(1, "i need to hump something");
    dog->rethinkIdeas(0, "food?");
    std::cout << "dog new thoughts" << std::endl;
    dog->writeIdeas();
    // copy dog and check:
    //  - thougts are new or now
    //  - modify old thoughts
    //  - idk shit
    delete dog;
}