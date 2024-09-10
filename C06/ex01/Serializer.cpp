# include "Serializer.hpp"

uintptr_t   Serializer::serialize(Data *ptr)
{
    uintptr_t   retVal;

    retVal = reinterpret_cast<uintptr_t>(ptr);
    return retVal;
}

Data*   Serializer::deserialize(uintptr_t raw)
{
    Data   *retVal;

    retVal = reinterpret_cast<Data *>(raw);
    return retVal;
}


Serializer::Serializer()
{

}

Serializer::~Serializer()
{

}

Serializer::Serializer(Serializer &fart)
{
    (void) fart;
}

Serializer  &Serializer::operator=(Serializer &pee)
{
    (void) pee;
    return *this;
}
