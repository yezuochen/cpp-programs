#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{
    // 46. Credit card validator program

    // Luhn Algorithm
    // 1. Double every second digit from right to left
    //    If doubled number is 2 digits, split them
    // 2. Add all single digits from step 1
    // 3. Add all odd numbered digits from right to left
    // 4. Sum results from step 2 & 3
    // 5. If step 4 is divisble by 10, # is valid

    // Discover: 6011 0009 9013 9424
    // 6011000990139424
    
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumOddDigits(cardNumber) + sumEvenDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid";
    }else{
        std::cout << cardNumber << " is not valid";
    }

    return 0;
}

int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }

    return sum;

}
int sumEvenDigits(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}