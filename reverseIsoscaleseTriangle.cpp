#include<iostream>

int main() {
    int height;
    std::cout<<"Enter height :";
    std::cin>>height;
    for(int i = 0;i < height;i++) {
        for(int j = 0;j < i;j++) {
            std::cout << ' ';
        }
        for(int j = 0;j < height - i;j++) {
            std::cout << '*' << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
/*
* * *
 * *
  *
*/
