#include <iostream>

std::string concatStrings(std::string string1, std::string string2);

int main(){

    std::string Firstname;
    std::string Lastname;
    std::cout << "What's your first name? ";
    std::cin >> Firstname;
    std::cout << "What's your last name? ";
    std::cin >> std::ws;
    std::cin >> Lastname;

    std::string fullname = concatStrings(Firstname, Lastname);

    std::cout << "Hello! Your full name is: " << fullname << '\n';

    return 0;
}

std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}


/* Example with return in a function to calculate the area and volume of a square and a cube
double square(double length); //function
double cube(double length); //function

int main(){

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    return 0;
}
double square(double length) //function
{
    return length * length;
}
double cube(double length) //function
{
    return length * length * length;
}
*/