#include<iostream>

int main() {
    int height;
    std::cout << "Enter height :";
    std::cin >> height;
    int maxspace = 0;
    for(int i = 1;height / i != 0;i*=10) {
        maxspace++;
    }
    std::cout << maxspace << '\n';
    for(int i = 0;i < height;i++) {
        for(int j = 0;j < height - 1 - i;j++) {
            std::cout << "  ";
        }
        if(i >= 9) {
            for(int j = 0;j < height - i - 1;j++) {
                if(i != height - 1) {
                    std::cout << ' ';
                }
            }
        }
        else {
            for(int j = 9;j < height;j++) {
                if(i != height - 1) {
                    std::cout << ' ';
                }
            }
        }
        for(int j = 0,k = 0;j < 2*i + 1;j++) {
            if(j < i) {
                std::cout << i + 1 + k;
                k--;
            }
            else {
                std::cout << i + 1 + k;
                k++;
            }
            std::cout << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}

/*
                         1 
                       2 1 2 
                     3 2 1 2 3 
                   4 3 2 1 2 3 4 
                 5 4 3 2 1 2 3 4 5
               6 5 4 3 2 1 2 3 4 5 6
             7 6 5 4 3 2 1 2 3 4 5 6 7
           8 7 6 5 4 3 2 1 2 3 4 5 6 7 8
         9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9
      10 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 10
   11 10 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 10 11
12 11 10 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 10 11 12
*/
