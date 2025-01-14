#include <iostream>

int main()
{

    int temp;
    bool sunny = false;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad!";
    }
    else {
        std::cout << "The temperature is good!";
    }

    if(!sunny){
        std::cout << "It's cloudy outside!";
    }
    else {
        std::cout << "It's sunny outside!";
    }

    return 0;
}