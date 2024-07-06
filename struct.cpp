#include <iostream>
template <typename T, typename U>

// int max(int x, int y){
//     return (x > y) ? x : y;
// }

auto max(T x, U y){
    return (x > y) ? x : y;
}

struct student{
    std::string name;
    double gpa;
    bool enrolled = true;
};

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);

void paintCar(Car &car, std::string color);

enum Day {
    sunday = 0, monday = 1, tuesday = 2, wednesday = 3,
    thursday = 4, friday = 5, saturday = 6
};

int main()
{

    // 52. Function templates
    // function template = describes what a function looks like.
    //                     Can be used to generate as many overloaded functions
    //                     as needed, each using differenct data types
    
    // std::cout << max(1.1, 3) << "\n";

    // 53. Structs
    // struct = A structure that group related variables under one name
    //          structs can contain many different data types (string, int, double, bool, etc.)
    //          variables in a struct are known as "members"
    //          members can be access with . "Class Member Access Operator"

    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;
    // student1.enrolled = true;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;
    // student2.enrolled = true;

    student student3;
    student3.name = "Squidward";
    student3.gpa = 1.5;
    student3.enrolled = false;

    // std::cout << student1.name << "\n";
    // std::cout << student1.gpa << "\n";
    // std::cout << student1.enrolled << "\n";

    // std::cout << student2.name << "\n";
    // std::cout << student2.gpa << "\n";
    // std::cout << student2.enrolled << "\n";

    // std::cout << student3.name << "\n";
    // std::cout << student3.gpa << "\n";
    // std::cout << student3.enrolled << "\n";

    // 54. Pass structs as arguments

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Mustang";
    car2.year = 2024;
    car2.color = "blue";

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    // std::cout << &car1 << "\n";
    // printCar(car1);
    // printCar(car2);

    // 55. Enums
    // enums = a user-defined data type that consists
    //         of paired named-integer constants.
    //         GREAT if you have a set of potential options

    std::string today1 = "sunday";

    // switch(today1){
    //     case "sunday": std::cout << "It is Sunday!\n";
    //                    break;
    //     // case "monday": ...
    //     default: break;
    // }

    Day today2 = sunday;

    switch(today2){
        case sunday: std::cout << "It is Sunday!\n";
                     break;
        //  ...
        default: break;
    }

    Day today3 = friday;

    switch(today3){
        // ...
        case 5: std::cout << "It is Friday!\n";
                break;
        // ...
        default: break;
    }

    return 0;
}

void printCar(Car &car){  // create a copy of car without &
    std::cout << &car << "\n";
    std::cout << car.model << "\n";
    std::cout << car.year << "\n";
    std::cout << car.color << "\n";
}

void paintCar(Car &car, std::string color){
    car.color = color; 
}