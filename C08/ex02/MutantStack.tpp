template <typename T>
MutantStack<T>::MutantStack()
{
    
}

template <typename T>
MutantStack<T>::~MutantStack()
{
    
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &obj) : std::stack<T>(obj)
{
}

template <typename T>
MutantStack<T>&MutantStack<T>::operator=(const MutantStack<T> &src)
{
	std::stack<T>::operator=(src);
	return (*this);
}

//  it: begin & end
/* 
MutantStack.tpp:27:1: 
error: need ‘typename’ before ‘MutantStack<T>::iterator’ because ‘MutantStack<T>’ is a dependent scope
*/
template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
    return (std::stack< T >::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
    return (std::stack< T >::c.end());
}