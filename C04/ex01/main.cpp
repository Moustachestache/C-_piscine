#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

/*int main()
{
    const Animal *AnimalArray[100];

    for (int i = 0; i < 100; i++)
    {
        if (i < 50)
            AnimalArray[i] = new Dog;
        else
            AnimalArray[i] = new Cat;
    }
    for (int i = 0; i < 100; i++)
        delete AnimalArray[i];
}*/

int main()
{
    Dog* dog = new Dog();
    Dog* extradog = new Dog(*dog);

    dog->printIdeas();
    extradog->printIdeas();

    delete dog;
    delete extradog;
}