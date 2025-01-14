#include <iostream>

int main(){

   //int x = 3.14;  //example of an Implicit conversion.

   //double x = (int) 3.14; //example of an Explicit conversion.


    //char x = 100; -> the value will be converted in a character from ASCII table 'cause the variable char just show characters. Implicit.

    //but I can do it using Explicit conversion...
    //std::cout << (char) 100;

    //and the number 100 will be ASCII table letter "d".

    //Example:

    int correct = 8;
    int questions = 10;
    double score = correct/ (double)questions * 100; //we convert the variable questions to double so we can have the right result.

    std::cout << score << "%";


    return 0;
}