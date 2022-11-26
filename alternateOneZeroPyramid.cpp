#include<iostream>

int main() {
    int height;
    std::cout << "Enter height : ";
    std::cin >> height;
    for(int i = 0;i < height;i++) {
        for(int j = 0;j <= i;j++) {
            std::cout << (i + j + 1) % 2 << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
