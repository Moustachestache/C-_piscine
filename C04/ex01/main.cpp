#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "test 1:" << std::endl;
    std::cout << "---- make Animal array" << std::endl;
    const Animal *AnimalArray[100];

    for (int i = 0; i < 100; i++)
    {
        if (i < 50)
            AnimalArray[i] = new Dog;
        else
            AnimalArray[i] = new Cat;
        std::cout << "---- fuck you here are the thoughts of Animal number " << i + 1 << ::std::endl;
        AnimalArray[i]->writeIdeas();
    }
    std::cout << "---- deleting array items;" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        delete AnimalArray[i];
    }
    std::cout << "test 2:" << std::endl;
    std::cout << "---- creating dog" << std::endl;
    Dog *dog = new Dog();
    std::cout << "---- creating dog2" << std::endl;
    Dog *dog2 = new Dog(*dog);
    std::cout << "---- dog thoughts are:" << std::endl;
    dog->writeIdeas();
    std::cout << "---- dog2 thoughts are:" << std::endl;
    dog2->writeIdeas();
    std::cout << std::endl << "---- changing ideas for dog 1" << std::endl;
    dog->rethinkIdeas(1, "i need to hump something");
    dog->rethinkIdeas(0, "food?");
    std::cout << "---- dog new thoughts" << std::endl;
    dog->writeIdeas();
    std::cout << "---- dog2 new thoughts (note: different from dog therefore deep copy):" << std::endl;
    dog2->writeIdeas();
    delete dog;
    delete dog2;
}