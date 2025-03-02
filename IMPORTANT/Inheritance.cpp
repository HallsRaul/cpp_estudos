#include <iostream>

class Animal{
    public:
        bool alive = true;
        
    void eat(){
        std::cout << "This animal is eating\n";
    }
};
class Dog : public Animal{
    public:

    void bark(){
        std::cout << "The dog goes woof!\n";
    }
};
class Cat : public Animal{
    public:

    void meow(){
        std::cout << "The cat goes meow!\n";
    }
};

int main() {

    Dog dog;
    Cat cat;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    return 0;
}
/*
    So, in this example, we created a class called Animal.
    This class has an attribute called alive and a method called eat.
    We also created two classes called Dog and Cat that inherit from the Animal class.
    The Dog class has a method called bark and the Cat class has a method called meow.
    In the main function, we created objects called dog and cat from the Dog and Cat classes.
    We printed the value of the alive attribute of the dog object.
    We called the eat method of the dog object.
    We called the bark method of the dog object.
    The output will be:
    1
    This animal is eating
    The dog goes woof!
    To a class inherit from another class, we used the following syntax:

    class Dog : public Animal{
    };

    With ": public Animal", we are saying that the Dog class inherits from the Animal class.
    This means that the Dog class will have all the attributes and methods of the Animal class.
*/