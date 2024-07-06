#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    // Student(std::string x, int y, double z){
    //     name = x;
    //     age = y;
    //     gpa = z;
    // }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string make, std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

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

int main(){

    // 57. Constructors
    // constructor = special method that is automatically called when an object is instantiated
    //               useful for assigning values to attributes as arguments

    Student student1("Spongebob", 25, 3.2);
    Student student2("Patrick", 40, 1.5);

    // std::cout << student1.name << "\n";
    // std::cout << student1.age << "\n";
    // std::cout << student1.gpa << "\n";

    // std::cout << student2.name << "\n";
    // std::cout << student2.age << "\n";
    // std::cout << student2.gpa << "\n";

    Car car1("Chevy", "Corvette", 2022, "blue");

    // std::cout << car1.make << "\n";
    // std::cout << car1.model << "\n";
    // std::cout << car1.year << "\n";
    // std::cout << car1.color << "\n";


    // 58. Constructor overloading
    // overloaded constructors = multiple constructors w/ same name but different parameters
    //                           allows for varying arguments when instantiating an object

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;

    std::cout << pizza1.topping1 << std::endl;

    std::cout << pizza2.topping1 << std::endl;
    std::cout << pizza2.topping2 << std::endl;

    return 0;
}