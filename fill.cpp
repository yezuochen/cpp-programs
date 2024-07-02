#include <iostream>

int main()
{

    // 39. Fill function
    // fill() = Fills a range of elements with a specified value
    //          fill(begin, end, value)

    // std::string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};
    // const int SIZE = 99 ;
    // std::string foods[SIZE];
    

    // fill(foods, foods + SIZE/3, "pizza");
    // fill(foods + SIZE/3, foods + (SIZE/3)*2, "hamburger");
    // fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");


    // for(std::string food: foods){
    //     std::cout << food << " ";
    // }

    // 40. Fill an arrry with user input

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0; i < size; i++){
        std::cout << "Enter a food you like or 'q' to quit #"<< i + 1 << ": ";
        std::getline(std::cin, temp);
        
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food:\n";

    // for(std::string food : foods){
    //     std::cout << food << '\n';
    // }

    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << '\n';
    }

    return 0;
}