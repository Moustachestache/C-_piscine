#pragma once
#include <iostream>

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain( const Brain &obj );
        Brain   &operator=( const Brain &obj );
        std::string getIdea( int i ) const;
    protected:
        std::string ideas[100];
};