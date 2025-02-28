#include <iostream>

/*
int main()
{

    / The memory address of a variable is the location in memory where the variable is stored.
    / To access it, you need to prepend the variable name with an ampersand (&) character.

    std::string name = "Hallsz";
    int age = 18;
    bool student = true;

    std::cout << &name << '\n';
    / Then will print the memory address of the variable name in hexadecimal.
    / Everytime you run the program, the memory address will be different. You can convert this numbers to see the distance between the memory addresses to decimal numbers.
    / So you can see how much memory is between the memory addresses, like in this case that the distance between the bool values is just one number 'cause they are stored just in one memory address.
    / Then, the distance between the memory addresses of the int and the bool is 4 numbers, so the int is stored in 4 memory addresses. That's useful to know how much memory is being used and manipulate it with pointers and references.
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    / You can also store the memory address in a pointer variable.
    / To do this, you need to declare a pointer variable with the data type of the variable you want to store the memory address of.
    / Then, you need to assign the memory address of the variable to the pointer variable.
    / To do this, you need to prepend the variable name with an ampersand (&) character.
    / The pointer variable will store the memory address of the variable.
    
    std::string *namePointer = &name;
    int *agePointer = &age;

    return 0;
}
*/

void swap(std::string &x, std::string &y);

int main()
{

    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

}
void swap(std::string &x, std::string &y) // So we can change the values of the variables x and y in the main function using the swap function as a Reference to the original memory addresses of x and y.
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

/*  So why use this? We use reference and pointers as a way to manipulate the memory addresses of variables and functions to make the code more efficient and to make the code more readable. So when you manipulate de address of a variable means that
    you will not need to make a copy of the variable to manipulate it, you will manipulate the original variable. That's why we use pointers and references, to make better memory manipulation and efficiency in the code. 
*/