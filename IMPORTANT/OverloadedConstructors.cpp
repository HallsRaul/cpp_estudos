#include <iostream>

    /*
        Overloaded constructors are constructors that have the same name but different parameters.
        They are used to create objects in different ways, allowing the user to pass different values ​​to the constructor.
        They are useful by allowing varied arguments when instantiating an object.
    */
    
class Pizza{
    public:
        std::string topping1;
        std::string topping2;
    
        Pizza(){
            
        }
        Pizza(std::string topping1){
            this->topping1 = topping1;
        }
        Pizza(std::string topping1, std::string topping2){
            this->topping1 = topping1;
            this->topping2 = topping2;
        }
    };
    
int main() {
    
    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;

    std::cout << pizza1.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n'; 
    std::cout << pizza3.topping2 << '\n';
    
    return 0;
}