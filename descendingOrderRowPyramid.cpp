#include<iostream>

int main() {
    int height;
    std::cout << "Enter height :";
    std::cin >> height;
    for(int i = 0;i < height;i++) {
        for(int j = i;j >= 0;j--) {
            std::cout << j + 1;
        }
        std::cout << '\n';
    }
    return 0;
}
