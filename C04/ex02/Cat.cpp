#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat( const Cat &obj ) : Animal()
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    this->type = obj.type;
    this->brain = new Brain(obj.getBrain());
}

Cat  &Cat::operator=( const Cat &obj )
{
    std::cout << "Cat Copy Assignment Constructor Called" << std::endl;
    if (this != &obj)
    {
        Cat *newCat = new Cat();
        newCat->type = obj.type;
        newCat->brain = new Brain(obj.getBrain());
        //  assignment to 'this' (anachronism)
        //  merci vscode
        //  cpp98 *shrug*
        *this = *newCat;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
    delete this->brain;
}

void    Cat::makeSound( void ) const
{
    std::cout << "meow meow meow" << std::endl;
}

void    Cat::writeIdeas( void ) const
{
    std::cout << "| ";
    for (int i = 0; i < 100; i++)
    {
        std::cout << this->brain->getIdea(i) << " | ";
    }
    std::cout << std::endl;
}


void    Cat::rethinkIdeas( int i, std::string str )
{
    this->brain->changeIdea(i, str);
}

const Brain&  Cat::getBrain( void ) const
{
    return (*this->brain);
}