#include <iostream>

int main()
{

    std::string name = "hallsz";
    int age = 18;
    std::string freePizzas[5] = {"pepperoni", "cheese", "mushroom", "bacon", "pineapple"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas; // if use "&" to call the array content, it will return an error because the array is a pointer itself, showing the memory address of the first element of the array.

    std::cout << pName << '\n'; // it shows the memory address of the variable name.
    std::cout << *pName << '\n'; // it shows the value of the variable name.
    std::cout << pAge << '\n'; 
    std::cout << *pAge << '\n';
    std::cout << freePizzas << '\n'; // it shows the memory address of the array freePizzas.
    std::cout << pFreePizzas << '\n'; // it shows the memory address of the array freePizzas too.
    std::cout << *pFreePizzas << '\n'; // it shows the value of the first element of the array freePizzas.
    std::cout << pFreePizzas[1] << '\n'; // it shows the value of the second element of the array freePizzas.

    
    return 0;
}