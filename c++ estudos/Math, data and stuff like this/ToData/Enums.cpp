#include <iostream>

    /*
        Hi! :D

        Enums = a user-defined data type that consists of paired name-integer constants
        GREAT if you have a ser of potencial options for a variable.
    */

enum Day {Monday =0, Tuesday = 1, Wednesday = 2, Thursday = 3,
         Friday = 4, Saturday = 5, Sunday = 6};
// The first element of the enum is 0, the second is 1, and so on.

int main(){
    Day today = Friday;

    switch(today){
        case Sunday:    std::cout << "It is Sunday!\n";
                        break;
        case Monday:    std::cout << "It is Monday!\n";
                        break;
        case Tuesday:   std::cout << "It is Tuesday!\n";
                        break;
        case Wednesday: std::cout << "It is Wednesday!\n";
                        break;
        case Thursday:  std::cout << "It is Thursday!\n";
                        break;
        case Friday:    std::cout << "It is Friday!\n";
                        break;
        case Saturday:  std::cout << "It is Saturday!\n";
                        break;
    }
    return 0;
}
