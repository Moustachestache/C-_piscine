/*
To repair this injustice, you have to make the std::stack container iterable.
Write a MutantStack class. 

It will be implemented in terms of a std::stack.
It will offer all its member functions, 

plus an additional feature: iterators.
Of course, you will write and turn in your own tests to ensure everything works as
expected. */

# pragma once

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack <T>{
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack &obj);
        MutantStack &operator=(const MutantStack &src);

		typedef
            typename std::stack< T >::container_type::iterator	iterator;

    //  hehe
    	iterator	begin(void);
		iterator	end(void);
};

# include "MutantStack.tpp"