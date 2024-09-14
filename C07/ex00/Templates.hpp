//	the easy way
template<typename T>
void    swap (T &a, T &b)
{
	T	temp = a;
	a = b;
	b = temp;
}

//	no temp version
template<typename T>
void    XORswap (T &a, T &b)
{
	a = static_cast<T>(a ^ b);
	b = static_cast<T>(b ^ a);
	a = static_cast<T>(a ^ b);
}

/* • min: Compares the two values passed in its arguments and returns the smallest
one. If the two of them are equal, then it returns the second one. */
template<typename T>
T    max (T a, T b)
{
    return (a < b ? b : a);
}

/* • max: Compares the two values passed in its arguments and returns the greatest one.
If the two of them are equal, then it returns the second one */
template<typename T>
T    min (T a, T b)
{
    return (a > b ? b : a);
}