#include <iostream>

int main()
{

    int month;
    std::cout << "Enter the month: ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "It's January!";
        break;
    case 2:
        std::cout << "It's Febuary!";
        break;
    case 3:
        std::cout << "It's March!";
        break;
    case 4:
        std::cout << "It's April!";
        break;
    case 5:
        std::cout << "It's May!";
        break;
    case 6:
        std::cout << "It's June!";
        break;
    case 7:
        std::cout << "It's July!";
        break;
    case 8:
        std::cout << "It's August!";
        break;
    case 9:
        std::cout << "It's September!";
        break;
    case 10:
        std::cout << "It's October!";
        break;
    case 11:
        std::cout << "It's November!";
        break;
    case 12:
        std::cout << "It's December!";
        break;
    
    default:
        std::cout << "Enter in onl numbers (1-12), please!";
        break;
    }

    return 0;
}