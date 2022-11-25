#include<iostream>

int main() {
    int height;
    std::cout << "Enter height :";
    std::cin >> height;
    for(int i = 0,k = 1;i < 2*height;i++) {
        if(i < height) {
            for(int j = 0;j < i;j++) {
                std::cout << ' ';
            }
            for(int j = 0;j < height - i;j++) {
                std::cout << '*' << ' ';
            }
        }
        else {
            for(int j = 0;j < i - k;j++) {
                std::cout << ' ';
            }
            for(int j = 0;j <= i - height;j++) {
                std::cout << '*' << ' ';
            }
            k+=2;
        }
        std::cout << '\n';
    }
    return 0;
}
