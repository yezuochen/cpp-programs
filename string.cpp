#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // if(name.empty()){
    //     std::cout << "You did not enter your name";
    // }

    // if(name.length() > 12){
    //     std::cout << "Your name can not be over 12 characters";
    // }else{
    //     std::cout << "Welcome " << name;
    // }

    // name.clear();
    // std::cout << "Hello " << name;

    // name.append("@gmail.com");
    // std::cout << "Your username is now " << name << std::endl;

    // std::cout << name.at(0) << std::endl;
    
    // name.insert(0, "@");
    // std::cout << name;

    // std::cout << name.find(' ');

    name.erase(0, 3);
    std::cout << name;

    return 0;
}