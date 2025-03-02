#include <iostream>

    /*
        Hi! There's a new concept that we need to learn: Constructors.

        Constructors are special methods that are called when an object is created.
        They are used to initialize the object's attributes.
        Useful for assigning values to attributes as arguments.
    */

class Student{
    public:
        int age;
        std::string name;
        double gpa;

        // Constructor
        Student(int age, std::string name, double gpa){
            this->age = age; // We use the "this" keyword to refer to the object's attributes.
            this->name = name;
            this->gpa = gpa;
            // So if we have a "y" variable, and we don't have a "y" attribute, we don't need to refer to the object's attribute "y" using "this".
        }

        void study(){
            std::cout << "This student is studying\n";
        }
        void sleep(){
            std::cout << "This student is sleeping\n";
        }
        void eat(){
            std::cout << "This student is eating\n";
        }
};
int main()
{
    // Creating objects
    Student student1(20, "John", 3.5); /* We created an object called student1 from the class Student.
                                            then we passed the values to the constructor.*/
    Student student2(40, "Wick", 2.5);

    // Print
    std::cout << "Name: " << student1.name << '\n';
    std::cout << "Age: " << student1.age << '\n';
    std::cout << "GPA: " << student1.gpa << '\n';
    std::cout << "Name: " << student2.name << '\n';
    std::cout << "Age: " << student2.age << '\n';
    std::cout << "GPA: " << student2.gpa << '\n';
    return 0;
}