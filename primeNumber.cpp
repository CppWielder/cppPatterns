#include<iostream>

int main() {
    int number;
    std::cout << "Enter a number :";
    std::cin >> number;
    int i;
    if(number < 2) {
        std::cout << "neither prime nor composite";
        return 0;
    }
    for(i = 2;(number % i != 0)&&(i <= number);i++);
    if(i == number) {
        std::cout << "prime";
    }
    else {
        std::cout << "composite";
    }
    return 0;
}
