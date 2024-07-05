#include <iostream>

void swap(std::string &x, std::string &y);
// void swap(std::string x, std::string y);

void printInfo(const std::string &name, const int &age);

int main() {

    // 43. Memory addresses
    // memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    // std::string name = "Bro";
    // int age = 21;
    // bool student = true;

    // std::cout << &name << "\n";
    // std::cout << &age << "\n";
    // std::cout << &student << "\n";

    // 44. Pass by VALUE vs. pass by REFERENCE

    std::string x = "Kool-Aid";
    std::string y = "Water";
    std::string temp;

    // temp = x;
    // x = y;
    // y = temp;

    swap(x, y);

    // std::cout << "X: " << &x << "\n";
    // std::cout << "Y: " << &y << "\n";

    // 45. Const parameters
    // conts parameter = parameter that is effectively read-only
    //                   code is more secure & conveys intent
    //                   useful for references and pointers

    std::string name = "Bro";
    int age = 21;

    printInfo(name, age);

    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

// void swap(std::string x, std::string y){
//     std::cout << "X: " << &x << "\n";
//     std::cout << "Y: " << &y << "\n";
// }

void printInfo(const std::string &name, const int &age){
    // name = " ";
    // age = 0;

    std::cout << name << "\n";
    std::cout << age << "\n";
}