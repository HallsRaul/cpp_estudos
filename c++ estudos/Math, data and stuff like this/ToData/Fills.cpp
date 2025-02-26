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
    }*/