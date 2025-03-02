#include <iostream>

    /*
        Hi!! This part of the jorney is ending, but don't worry, we will continue to learn more about C++ in the next path.
        
        In this path we'll learn about classes and objects, and how to create them.

        Let's start with the basics:

        An object is a collection of attributes and methods.
        They can have characteristics and vcould peform actions.
        Can be used to mimic real-world objects.
        Created from a class which acts as a "blue-print".

    */

class Human{
    public:
        int age;
        std::string name;
        std::string occupation;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
}; // We need to put a semicolon at the end of the class

    /*
        In the example above, we created a class called Human.
        This class has three attributes: age, name and occupation.
        We also have three methods: eat, drink and sleep.

        Now, let's create an object from this class.
    */

int main()
{

    // Creating objects
    Human person1; // We created an object called person1 from the class Human.
    Human person2; // We can create as many objects as we want.
    
    // Person 1 and 2 attributes
    person1.name = "John"; // We can access the attributes of the object using the dot operator.
    person1.age = 30; // We can also change the attributes of the object.
    person1.occupation = "Engineer";

    person2.name = "Wick";
    person2.age = 22;
    person2.occupation = "Unemployed";

    // Printing the attributes of the objects
    std::cout << "Name: " << person1.name << '\n';
    std::cout << "Age: " << person1.age << '\n';
    std::cout << "Occupation: " << person1.occupation << '\n';

    std::cout << "Name: " << person2.name << '\n';
    std::cout << "Age: " << person2.age << '\n';
    std::cout << "Occupation: " << person2.occupation << '\n';

    // Calling the methods of the objects
    person1.eat();
    person1.drink();
    person1.sleep();

    person2.eat();
    person2.drink();
    person2.sleep();

    return 0;
}