#include <iostream>
#include <cmath>

int main() {
    
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "************ CALCULATOR **************\n";
    
    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1; 

    std::cout << "Enter #2: ";
    std::cin >> num2; 

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "Result:" << result; 
        break;
    
    case '-':
        result = num1 - num2;
        std::cout << "Result:" << result; 
        break;

    case '*':
        result = num1 * num2;
        std::cout << "Result:" << result; 
        break;
    
    case '/':
        result = num1 / num2;
        std::cout << "Result:" << result; 
        break;
    
    default:
        break;
    }

    std::cout << "\n**************************************";

    return 0;
}