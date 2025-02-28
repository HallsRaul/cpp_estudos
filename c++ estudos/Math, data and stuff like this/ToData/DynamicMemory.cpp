#include <iostream>

    /*
        Hi again :)
        
        Well, this time I'm going to talk about dynamic memory allocation in C++.
        Dynamic memory is memory that is allocated after the program is already compiled and running.
        This is useful when you don't know the size of the memory you need to allocate before the program is running.
        So Use the 'new' operator to allocate memory in the heap rather tan the stack.abort
        
        Useful when we don't know how much memory will be needed at runtime. Makes our programs more flexible, especially when accepting user input.
    */

int main()
{
    int *pNum = NULL; // Pointer to an integer, initialized to NULL

    pNum = new int; // Allocate memory for an integer

    *pNum = 21; // Assign a value to the allocated memory

    std::cout << "address: " << pNum << '\n'; // Print the address of the allocated memory
    std::cout << "value: " << *pNum << '\n'; // Print the value in the allocated memory

    delete pNum; // Deallocate the memory 

    // So you gonna use it when you don't have any idea of how much memory you will need at runtime. So if you'll create a array, for example, and you know that this array will have only 5 items,
    // you can use the stack memory, but if you don't know how much items you will have, you can use the heap memory.

    // There are an example:

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;



}