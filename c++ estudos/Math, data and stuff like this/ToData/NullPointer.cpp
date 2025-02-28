#include <iostream>

int main()
{
    /*
        Hi :)

        First you need to know what is a null value:
        A null value is a value that doesn't exist, it's a value that is empty.
        In C++, a null value is represented by the keyword "nullptr".
        When a pointer is holding a null value, that pointer is not pointing at anything(null pointer).

        So, let's see how to use a null pointer in C++.

        nullptrs are helpful when it determining if an address was successfuly assigned to a pointer.

        When using pointer, be careful that your code isn't deferencing nullptr or pointing to free memory
        (memory that has been deallocated). This will cause undefined behavior.

        Now, try this!
    */

    int *pNumber = nullptr; // This is a null pointer, it's not pointing at anything.
    int x = 123;
    
    pNumber = &x; // This will return an error because the pointer is not pointing at anything.

    if(pNumber != nullptr){
        std::cout << "address of x: " << pNumber << '\n';
        std::cout << "Pointing: " << *pNumber;
    }else{
        std::cout << "The pointer is not pointing at anything." << '\n';
    }

    return 0;
}