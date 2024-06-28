#include <iostream>
#include <ctime>

int main()
{
    // 23. Random number generator
    // pseudo-random = NOT truly random (but close)
    
    // srand(time(NULL));

    // int num1 = rand() % 6 + 1;
    // int num2 = rand() % 6 + 1;
    // int num3 = rand() % 6 + 1;

    // std::cout << num1 << std::endl;
    // std::cout << num2 << std::endl;
    // std::cout << num3 << std::endl;

    // 24. Random event generator

    // srand(time(0));
    // int randNum = rand() % 5 + 1;

    // switch(randNum){
    //     case 1: std::cout << "win a bumper sticker!\n";
    //             break;
    //     case 2: std::cout << "win a t-shirt!\n";
    //             break;
    //     case 3: std::cout << "win a free lunch!\n";
    //             break;
    //     case 4: std::cout << "win a gift card!\n";
    //             break;
    //     case 5: std::cout << "win a concert tickets!\n";
    //             break;
    // }

    // 25. Number guessing game
    
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "***** NUMBER GUESSING GAME *******\n";

    do{
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high\n";
        }else if(guess < num){
            std::cout << "Too low\n";
        }else{
            std::cout << "CORRECT! # of tries: " << tries << '\n';
        }
    }while(guess != num);

    return 0;
}