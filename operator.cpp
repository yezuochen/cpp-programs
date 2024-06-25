#include <iostream>

int main(){

    // 14. Ternary operator

    // int grade = 75;
    // (grade >= 60) ? std::cout << "You pass" : std::cout << "You fail";

    // int number = 9;
    // number % 2 ? std::cout << "odd" : std::cout << "even";

    // bool hungry = true;
    // // hungry ? std::cout << "hungry" : std::cout << "full";
    // std::cout << (hungry ? "hungry" : "full");


    // 15. Logical operator
    // `&&`: and
    // `||`: or
    // `!`: not

    int temp;
    bool sunny = true;
    std::cout << "Enter temperature: ";
    std::cin >> temp;

    if(temp > 0 || temp < 30){
        std::cout << "good\n";
    }
    else{
        std::cout << "bad\n";
    }

    if(sunny){
        std::cout << "sunny";
    }else{
        std::cout << "cloudy";
    }

    return 0;
}