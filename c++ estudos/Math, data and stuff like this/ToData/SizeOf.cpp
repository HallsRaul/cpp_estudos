#include <iostream>

int main()
{

    std::string name = "hallsz";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Hallsz", "Leticia", "Lucas"};

    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";
    //std::cout << sizeof(grades)/sizeof(char) << " elements\n";

    return 0;
}