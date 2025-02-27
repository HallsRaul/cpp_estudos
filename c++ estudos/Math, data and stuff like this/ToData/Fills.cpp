#include <iostream>

int main()
{

    const int SIZE = 100; 
    std::string foods[SIZE];
    
    fill(foods, foods + (SIZE/2), "pizza");
    fill(foods + (SIZE/2), foods + SIZE, "hamburger");

    for(std::string food : foods){
        std::cout << food << "\n";
    }
}

/*
divide pelos terços

    const int SIZE = 100; 
    std::string foods[SIZE];
    
    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdogs");

    for(std::string food : foods){
        std::cout << food << "\n";


        if you want to fill the array with user input, you can use the std::fill function with an iterator like
        std::getline(std::cin, foods, '\n');

        and then use a for loop with a i variable to iterate over the array and print the values.abort

    }*/