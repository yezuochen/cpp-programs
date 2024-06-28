#include <iostream>

void happyBirthday(std::string name, int age);

double square(double length);
double cube(double length);

std::string concatStrings(std::string string1, std::string string2);

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

void printNum(int myNum);
void printNum();

int myNum = 3;

int main()
{
    // 26. User defined functions
    // function = a block of reusable code

    // std::string name = "Bro";
    // int age = 21;

    // happyBirthday(name, age);

    // 27. Return keyword
    // return = return a value back to the spot
    //          where you called the encompassing function

    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    // std::cout << "Area: " << area << " cm^2\n";
    // std::cout << "Volume: " << volume << " cm^3\n";

    std::string firstName = "Bro";
    std::string lastName = "Code";
    std::string fullName = concatStrings(firstName, lastName);

    // std::cout << "Hello! " << fullName;

    // 28. Overloaded functions

    // bakePizza();
    // bakePizza("pepperoni");
    // bakePizza("pepperoni", "mushroom");

    // 29. Variable scope
    // LOCAL VARIABLES = DECLARED INSIDE A FUNCTION OR BLOCK {}
    // GLOBAL VARIABLES = DECLARED OUTSIDE OF ALL FUNCTIONS

    int myNum = 1;
    // std::cout << myNum;

    // printNum(myNum);
    printNum();
    std::cout << myNum << "\n";
    std::cout << ::myNum;

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday dear " << name << "\n";
    std::cout << "You are " << age << "years old\n";
    std::cout << "Happy Birthday to " << name << "\n";
}

double square(double length){
    // double result = length * length;
    // return result;
    return length * length;
}

double cube(double length){
    return length * length * length;
}

std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}

void printNum(int myNum){
    std::cout << myNum << std::endl;
}

void printNum(){
    int myNum = 2;
    std::cout << myNum << std::endl;
}

// void printNum(){
//     std::cout << myNum << std::endl;
// }