#include<iostream>

int main() {
    int height;
    std::cout << "Enter height of rhombus :";
    std::cin >> height;
    for(int i = 0;i < height;i++) {
        for(int j = 0;j < height - i - 1;j++) {
            std::cout << ' ';
        }
        for(int j = 0;j < height;j++) {
            std::cout << '*' << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
