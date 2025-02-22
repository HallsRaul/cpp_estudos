#include <iostream>

int MyNum = 3;
void printNum();//(int MyNum)

int main()
{

    int MyNum = 1;

    printNum();//(int MyNum)
    std::cout << ::MyNum << '\n';

    return 0;
}
void printNum()
{
    int MyNum = 2;
    std::cout << ::MyNum << '\n';
}
// in this example the function knows the value of MyNum because it was passed as an argument
// the function printNum knows the value of MyNum because it was passed as an argument
// but the function printNum can have another result inside of it changing the value of MyNum because it was passed as an argument. This happens because the funtion will print first the local variable and then the global variable.
// so we can resolve this by passing the scope argument(::) to the function showing that the function will use the global variable.