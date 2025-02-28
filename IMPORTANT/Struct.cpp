#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled = true;
};
int main()
{

    // Struct = A structure that group related variables under one name.
    // So, a struct is a user-defined data type that groups related variables of various data types.
    // Structs can contain many different data types(string, int, double, bool, etc.), including other structs.
    // Variables in a struct are known as "Memebers".
    // Members can be access with .(dot) "Class Member Access Operator".

    student student1;
    student1.name = "John";
    student1.gpa = 3.5;

    student student2;
    student2.name = "Wick";
    student2.gpa = 2.3;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    return 0;
}