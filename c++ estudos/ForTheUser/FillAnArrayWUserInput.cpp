#include<iostream>
 
int main()
{
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp; //temporary string to store the user input

    for(int i = 0; i < size; i++){
        std::cout << "Enter in food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);
        //if the user types 'q', break out of the loop
        if(temp == "q"){ 
            break;
        }
        else{
            //store the user input in the array
            foods[i] = temp; 
        }
    }

    std::cout << "You like the following food:\n";

     //checks if the string is empty, if it is, don't print it.
    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << '\n';
    }

    return 0;
}