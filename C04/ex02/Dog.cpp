#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    this->brain = new Brain();
    this->type = "Dog";
}

Dog::Dog( const Dog &obj ) : Animal()
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
    this->type = obj.type;
    this->brain = new Brain(obj.getBrain());
}

Dog  &Dog::operator=( const Dog &obj )
{
    std::cout << "Dog Copy Assignment Constructor Called" << std::endl;
    if (this != &obj)
    {
        Dog *newDog = new Dog();
        newDog->type = obj.type;
        newDog->brain = new Brain(obj.getBrain());
        //  assignment to 'this' (anachronism)
        //  merci vscode
        //  cpp98 *shrug*
        *this = *newDog;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
    delete this->brain;
}

void    Dog::makeSound( void ) const
{
    std::cout << "woof woof woof" << std::endl;
}

void    Dog::writeIdeas( void ) const
{
    std::cout << "| ";
    for (int i = 0; i < 100; i++)
    {
        std::cout << this->brain->getIdea(i) << " | ";
    }
    std::cout << std::endl;
}

void    Dog::rethinkIdeas( int i, std::string str )
{
    this->brain->changeIdea(i, str);
}

const Brain&  Dog::getBrain( void ) const
{
    return (*this->brain);
}