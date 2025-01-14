#include <iostream>


int main()
{

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    /* String char limiter function.
    if(name.length() > 12){
        std::cout << "Your name can't be over 12 characters.";
    }
    else{
        std::cout << "Welcome " << name;
    }
    */

   /* Checks if it's empty
   if(name.empty()){
    std::cout << "You didn't enter your name";
   }
   else{
    std::cout << "Hello!" << name;
   }
    */

   /*Clear string content 
   name.clear();

   std::cout << "Hello " << name;
    */

    /*Append method
   name.append("@gmail.com");
    std::cout << "Your username is now: " << name;
    */

    /*We can return a character at a given position in a string
    std::cout << name.at(0);
    */

   /*We can insert another char in a given position.
   name.insert(0, "@");
   std::cout << name;
   */
    
    /*We can find chars in a string.
    std::cout << name.find(' ');
    In this case we will find where is the first white space in the string.
    */

   /*We can erase things on a string setting where the process will begin and where it ends.
    name.erase(0.3);
    std::cout << name;
   */
    return 0;
}