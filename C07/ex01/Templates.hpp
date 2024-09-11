/* Implement a function template iter that takes 3 parameters and returns nothing.

• The first parameter is the address of an array.

• The second one is the length of the array.

• The third one is a function that will be called on every element of the array.

Turn in a main.cpp file that contains your tests. Provide enough code to generate a
test executable.
Your iter function template must work with any type of array. The third parameter
can be an instantiated function template */

//  Type, Size, Function
template <typename T, typename S, typename F>
void    iter (T *array, S size, F (*function)(T &val))
{
    if (!array || !function)
        return ;

    for (int i = 0; i < size; i++)
        function(array[i]);
}

//  for funct that works everywhere lol
template <typename Q>
void    beepboop(Q &target)
{
    std::cout << "beep, boop, the THING is [" << target << "] and I am a generic function" << std::endl;
}