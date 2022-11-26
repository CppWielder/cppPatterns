#include<iostream>

int main() {
    int height;
    std::cout << "Enter height :";
    std::cin >> height;
    int maxspace = 1;
    for(int i = 10;height/i != 0;i*=10) {
        maxspace++;
    }
    for(int i = 0;i < height;i++) {
        for(int j = 0;j < height - 1 - i;j++) {
            std::cout << ' ';
        }
        for(int j = 0;j < height;j++) {
            std::cout << i + 1;
            int space = 0;
            for(int k = 10;(i + 1) / k != 0;k*=10) {
                space++;
            }
            for(int k = 0;k < maxspace - space;k++) {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
    return 0;
}

