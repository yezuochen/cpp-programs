#include <iostream>

double getTotal(double prices[], int size);

int main()
{

    // 32. Arrays
    // array = a data structure that can hold multiple values
    //         values are accessed by an index number
    //         "kind of like a variable that holds multiple values"

    // std::string cars[] = {"Corvette", "Mustang", "Camry"};
    // std::string cars[3];

    // cars[0] = "Camaro";
    // cars[1] = "Mustang";
    // cars[2] = "Camry";

    // std::cout << cars[0] << '\n';
    // std::cout << cars[1] << '\n';
    // std::cout << cars[2] << '\n';

    // double prices[] = {5.00, 7.50, 9.99, 15.00};

    // std::cout << prices[0] << '\n';
    // std::cout << prices[1] << '\n';
    // std::cout << prices[2] << '\n';
    // std::cout << prices[3] << '\n';

    // 33. Sizeof operator
    // sizeof() = determines the size in bytes of a:
    //            variable, data type , class, objects, etc.

    // std::string name = "Bro";
    // double gpa = 2.5;
    // char grade = 'F';
    // bool student = true;
    // char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    // std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    
    // std::cout << sizeof(gpa) << " bytes\n";
    // std::cout << sizeof(name) << " bytes\n";
    // std::cout << sizeof(grade) << " bytes\n";
    // std::cout << sizeof(student) << " bytes\n";
    // std::cout << sizeof(grades) << " bytes\n";
    // std::cout << sizeof(grades)/sizeof(char) << " elements\n";
    // std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    // 34. Iterate over an array
    
    // std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    // char grades[] = {'A', 'B', 'C', 'D', 'F'};

    // for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
    //     std::cout << students[i] << '\n';
    // }

    // for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
    //     std::cout << grades[i] << '\n';
    // }

    // 35. Foreach loop
    // foreach loop = loop that eases the traversal over an
    //                interable data set

    // std::string students[] = {"Spongebob", "Patrick", "Squidward"};
    // int grades[] = {65, 72, 88, 91};


    // for(std::string student : students){
    //     std::cout << student << '\n';
    // }

    // for(int grade : grades){
    //     std::cout << grade << '\n';
    // }

    // 36. Pass array to a function

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);

    double total = getTotal(prices, size);

    std::cout << "$" << total;

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;

    // for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
    //     total += prices[i];
    // }

    for(int i = 0; i < size; i++){
    total += prices[i];
    }

    return total;
}