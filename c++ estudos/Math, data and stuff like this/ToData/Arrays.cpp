#include <iostream>
#include <array>

int main() {
    
    std::string car[] = {"Corvette", "Ferrari", "Porsche", "Lamborghini"};
    std::string cars[3];
    
    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    std::cout << car[0] << std::endl;
    std::cout << car[1] << std::endl;
    std::cout << car[2] << std::endl;

    return 0;
}