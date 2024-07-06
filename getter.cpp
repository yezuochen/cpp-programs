#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:

    Stove(int temperature){
        setTemperature(temperature);
    }

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

int main(){


    // 59. Getters & setters
    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE

    // Stove stove;
    Stove stove(3);

    // stove.temperature = 1000;
    // stove.setTemperature(5);

    // std::cout << "The tempeartue seeting is : " << stove.temperature << std::endl;
    std::cout << "The tempeartue seeting is : " << stove.getTemperature() << std::endl;
    
    
    return 0;
}