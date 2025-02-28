#include <iostream>

    /*
        Hello! :)

        This time I'm going to talk about recursion in C++.
        Recursion is a technique in which a function calls itself from within.
        So invokes itself from within.
        Break a complex concept into smaller, more manageable pieces. Into a repeatable single step.
    
        Many problems it can approach iterative vs recursive.

        So the advantage of recursion is that it can make the code simpler and easier to understand.
        Cleaner, useful for sorting and searching algorithms.

        Disavantages: can be slower than iterative solutions, and can consume more memory.

    */

    /* Example of recursion:

            void walk(int steps);

            int main()
            {
                walk(5);

                return 0;
            }
            void walk(int steps){
                
                std::cout << "You take a step!\n";
                walk(steps); // This is a recursive call
                / This function will call itself infinitely, because it doesn't have a base case to stop the recursion. Thats called stack overflow.
                / So, the base case is the condition that stops the recursion.

                /* The right way to do this is:
                if(steps == 0){
                    return;
                }
                std::cout << "You take a step!\n";
                walk(steps - 1);
                / This is a recursive call
                / So, the base case is the condition that stops the recursion. 
            }
            */

//Example:
int factorial(int num); // Factorial of a number is the product of all positive integers less than or equal to that number. So if i have 6!, it will be 6 * 5 * 4 * 3 * 2 * 1 = 720.

int main () {

    std::cout << factorial(10);

    return 0; 
}
int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}
