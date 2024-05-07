#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor Called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "*unintelligible animal thoughts*";
    }
}

Brain::Brain( const Brain &obj)
{
    std::cout << "Brain Copy Constructor Called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = obj.getIdea(i) + "copied";
    }
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}

Brain   &Brain::operator=(const Brain &obj)
{
    std::cout << "Brain Copy Operator Constructor Called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = obj.getIdea(i);
    }
    return *this;
}

const std::string Brain::getIdea( int i ) const
{
    return this->ideas[i];
}

void Brain::changeIdea( int i, std::string str)
{
    this->ideas[i] = str;
}