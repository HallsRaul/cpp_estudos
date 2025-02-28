#include <iostream>

/*
    Hi again!

    There is a way to create a function that can work with any data type.
    Function template: 
    A function template is a function that can operate with generic types.
    Can be used to generate as many overloaed functions as needed, each using different data types.
    So describe a general function with a placeholder for the data type.
    The placeholder is specified using a template parameter list, which is a comma-separated list of template parameters inside angle brackets.
    The template parameter list must be included before the function's return type.
    Then describes what a function looks like, but not what data type it works with.
*/

/* Example:

int max(int x, int y){
    return (x > y) ? x : y;
}
double max(double x, double y){
    return (x > y) ? x : y;
}
char max(char x, char y){
    return (x > y) ? x : y;
}
int main(){

    std::cout << max(1,2) << '\n'; // 2
    std::cout << max('1', '2') << '\n'; // 2 - the decimal portion is truncated

    / So if I want this function to work with decimal numbers, I would have to create another function with the same code, but with double data type. A overloaded function.
    / Well, seeing this, we can say that create overloaded functions is the most slowly and bad way to use as the question here is a simple, and correct-performing function 
    / working with all parameters and types of data we need in a template.
    / So there is a way to do this in C++ using function templates:
*/

template <typename T, typename U> // This is the template parameter list, then if you add another "typename (letter or name)" you can make one date type interact with the other.
/*(Before, auto was set as T(in case of make result to be convert to T data type))*/
auto max(T x, U y){ // then here you can use the template parameter list to make the function work with any data type. T is for data type 1, and U is for data type 2.
    return (x > y) ? x : y;
}

int main(){

    std::cout << max(1,2) << '\n'; // 2
    std::cout << max('1', '2') << '\n'; // 2 - the decimal portion is truncated
    std::cout << max(1.1, 2.2) << '\n'; // 2.2
    std::cout << max(1, 2.1) << '\n'; // 2.1

    return 0;
}