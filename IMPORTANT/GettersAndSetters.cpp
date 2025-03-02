#include <iostream>

class Stove{
    // we use the "private" keyword to make the attribute private. So it can only be accessed by the class itself.
    private:
        int temperature = 0;
    public:

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }
};

int main() {

    Stove stove;

    stove.setTemperature(5);

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}
    /* 
        In this example, we created a class called Stove.
        This class has a private attribute called temperature.
        We have two methods: getTemperature and setTemperature.
        The getTemperature method returns the value of the temperature attribute.
        The setTemperature method sets the value of the temperature attribute.
        We use the "this" keyword to refer to the object's attribute.
        We also have a condition that if the temperature is less than 0, the temperature will be set to 0.
        If the temperature is greater than or equal to 10, the temperature will be set to 10.
        Otherwise, the temperature will be set to the value passed as an argument.
        In the main function, we created an object called stove from the class Stove.
        We set the temperature to 5 using the setTemperature method.
        Finally, we print the temperature using the getTemperature method.
        The output will be:
        The temperature setting is: 5
    */