# pragma once
# include <iostream>
# include <exception>

template <typename T>
class Array
{
    public:
        Array();
        ~Array();
        Array(int inputSize);
        Array(Array &hello);
        Array   &operator=(Array &coucou);

        //  template for [] means any can work (technically ?)
        template <typename NUM>
        T       &operator[](NUM index);

        int     size( void );

        void    runThrough( void );
        
        class	OutOfBoundsE : public std::exception
		{
			public:
				virtual const char* what( void ) const throw();
		};

    private:
        T       *_array;
        int     _size;
};
# include "Array.tpp"