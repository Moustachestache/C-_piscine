# include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0)
{
    std::cout << "default constructor called" << std::endl;
	_array = new T[_size];
}

template <typename T>
Array<T>::Array(int inputSize) : _size(inputSize)
{
    std::cout << "int constructor called" << std::endl;
	_array = new T[_size];
}

template <typename T>
Array<T>::Array(Array &hello) : _size(hello.size())
{
    std::cout << "copy constructor called" << std::endl;
    _array = new T[_size];
    for (int i = 0; i < _size; i++)
    {
        _array[i] = hello[i];
    }
}

template <typename T>
Array<T>    &Array<T>::operator=(Array &coucou)
{
    std::cout << "assignment copy constructor called" << std::endl;
    _size = coucou.size();
    _array = new T[_size];
    for (int i = 0; i < _size; i++)
    {
        _array[i] = coucou[i];
    }
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
    std::cout << "destructor called" << std::endl;
	if (_array)
		delete [] _array;
}

template <typename T> template <typename NUM>
T   &Array<T>::operator[](NUM index)
{
    if (static_cast<int>(index) < _size)
        return (this->_array[static_cast<int>(index)]);
    else
	    throw Array< T >::OutOfBoundsE();
}

template <typename T>
int     Array<T>::size( void )
{
    return (_size);
}

template < typename T >
const char *Array< T >::OutOfBoundsE::what( void ) const throw()
{
	return ("error: array index reaches outside of memory block");
}

//  extra for testing
template < typename T >
void    Array< T >::runThrough( void )
{
    if (!_array || _size == 0)
        return ;
    for (int i = 0; i < _size; i++)
    {
        std::cout << "index[" << i << "] has value \"" << _array[i] << "\"" << std::endl;
    }
}