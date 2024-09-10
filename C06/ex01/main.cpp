# include "Serializer.hpp"

int     main(void)
{

    Data    *ptr = new Data;
        ptr->stuff = "hehe hihi :))";

    uintptr_t   test;
    test = Serializer::serialize(ptr);

    Data    *rePtr;
        rePtr = Serializer::deserialize(test);

    std::cout << "address: " << ptr << " [data: " << ptr->stuff << "]" << std::endl;
    std::cout << "serialized: " << test << " [hex: " << std::hex << test << "]" << std::endl;
    std::cout << "deserialized: " << rePtr << " [re data: " << rePtr->stuff << "]" << std::endl;

    delete ptr;
}
