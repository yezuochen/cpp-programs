#include <iostream>

int main()
{
    // 18. While loops
    // std::string name;

    // while(name.empty()){
    //     std::cout << "Enter your name: ";
    //     std::getline(std::cin, name);
    // }

    // std::cout << "Hello " << name;

    // 19. Do while loops
    // DO WHILE LOOP = DO SOME BLOCK OF CODE FIRST;
    //                 THEN REPEAT AGAIN IF CONDITION IS TRUE

    // int number;

    //     std::cout << "Enter a positive #: ";
    //     std::cin >> number;

    // while(number < 0){
    //     std::cout << "Enter a positive #: ";
    //     std::cin >> number;
    // }

    // do{
    //     std::cout << "Enter a positive #: ";
    //     std::cin >> number;
    // }while(number < 0);

    // std::cout << "The # is: " << number;

    // 20. For loops
    // for(int i = 10; i >= 0; i-=2){
    //     std::cout << i << '\n';
    // }

    // std::cout << "HAPPY NEW YEAR!\n";

    // 21. Break & continue
    // break    = break out of a loop
    // continue = skip current iteration

    // for(int i = 1; i <= 20; i++){
    //     if(i == 13){
    //         // break;
    //         continue;
    //     }
    //     std::cout << i << '\n';
    // }

    // 22. Nested loops
    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows? ";
    std::cin >> rows;

    std::cout << "How many columns? ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std::cout << symbol;
        }

        std::cout << std::endl;
    }

    return 0;
}