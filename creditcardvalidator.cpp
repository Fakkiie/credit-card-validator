#include <iostream>

int getDigits(const int number){
    return number % 10 + (number / 10 % 10); 
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() - 1;i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }
    return sum;
}
int sumEvenDigits(const std::string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() - 2;i >= 0; i-=2){
        sum += getDigits((cardNumber[i] - '0' ) * 2 );
    }
    return sum;
}

int main(){

    std::string cardNumber;
    int result = 0;

    std::cout<<"Enter a Credit Card Number: ";
    std::cin>> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
     
    if(result % 10 == 0){
        std::cout<<"Credit Card is valid";
    }else{
        std::cout<<"Credit Card is invalid";
    }
    return 0;
}