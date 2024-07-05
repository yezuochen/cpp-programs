#include <iostream>

int main()
{

    // 47. Pointers
    // pointers = variable that sotres a memory address of another variable
    //            somtime it is easier to work with an aaddress

    // & address-of operator
    // * dereference operator

    std::string name = "Bro";
    int age = 21;
    std::string freePizzas[5] = {
        "pizza1", "pizza2", "pizza3", "pizza4", "pizza5"
    };

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    // std::cout << *pName << "\n";
    // std::cout << *pAge << "\n";
    // std::cout << *pFreePizzas << "\n";
    // std::cout << freePizzas << "\n";


    // 48. Null pointers
    // Null value = a special value that means something has no value
    //              When a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer

    // When using pointers, be careful that your code is not 
    // dereferencing nullptr or pointing to free memory
    // this will cause undefined behavior

    int *pointer = nullptr;
    int x = 123;
    
    // pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assigned!\n";
        std::cout << *pointer;
    }
    else{
        std::cout << "address was assigned!\n";
        // std::cout << *pointer;
    }


    return 0;
}