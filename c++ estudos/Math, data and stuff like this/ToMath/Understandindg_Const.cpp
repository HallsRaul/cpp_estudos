#include <iostream>

int main(){

    /*A program to calculate the circumference of a circle
    
    Radius = Raio

    */

    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm" << '\n';

    /* In the case of this variable still just double without a const we can see that if someone change the pi value,
     that should be always the same, the circumference size will be other, so we have to turn the "double pi" variable into a
     const variable.

     If for some reason you try to change the pi variable value, the code will return an error.
    */

    return 0;
}