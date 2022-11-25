#include<iostream>

int main() {
    int height;
    std::cout << "Enter height :";
    std::cin >> height;
    for(int i = 0;i < height;i++) {
        for(int j = 0;j <= i;j++) {
            std::cout << i + j + 1;
            int maxspace = 1;
            for(int k = 10;(height + j)/ k != 0;k*=10) {
                maxspace++;
            }
            int space = 0;
            for(int k = 10;(i + j + 1) / k != 0;k*=10) {
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

/*
1
2  2
3  3  3
4  4  4  4
5  5  5  5  5
6  6  6  6  6  6
7  7  7  7  7  7  7
8  8  8  8  8  8  8  8
9  9  9  9  9  9  9  9  9
10 10 10 10 10 10 10 10 10 10
*/
