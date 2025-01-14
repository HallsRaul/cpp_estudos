#include <iostream>

int main()
{

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;


    if(age >= 100){
        std::cout << "OMG, there is a really old guy here! ";
    }
    else if(age >= 18){
        std::cout << "Welcome to the site!";
    }
    else if(age < 0){
        std::cout << "You haven't been born yet '-' ";
    }
    else{
        std::cout << "Get out of here!";
    }

    return 0;
}