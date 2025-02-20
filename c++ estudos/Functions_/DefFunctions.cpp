#include <iostream>

//void happyBirthday(std::string name);
void happyBirthdayI(std::string name, int age);

int main(){

    //function = a block of reusable code

    std::string name;
    int age;

    std::cout << "It's your birthday?! OMG! What's your name? ";
    std::cin >> name;
    std::cout << "How old are you? ";
    std::cin >> age;

    //happyBirthday(name); era o antigo do brocode

    happyBirthdayI(name, age);

    return 0;
}
/*
void happyBirthday(std::string name){
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';

}
*/
void happyBirthdayI(std::string name, int age){ //achei só mais inteligente do q o codigo do bro code
    for(int i = 1; i <=4; i++)
    {
        std::cout << "Happy Birthday to " << name << '\n';
    }
    std::cout << "You're " << age << " years old!" << '\n';
}