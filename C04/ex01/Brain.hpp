#pragma once
#include <iostream>

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain( const Brain &obj );
        Brain   &operator=( const Brain &obj );
        const std::string getIdea( int i ) const;
        void changeIdea( int i, std::string str);
    protected:
        std::string ideas[100];
};