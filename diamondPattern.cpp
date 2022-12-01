#include<iostream>

int main() {
    int width;
    std::cout << "Enter width of diamond pattern :";
    std::cin >> width;
    for(int i = 0;i < 2*width - 1;i++) {
        if(i < width) {
            for(int j = 0;j < width - i - 1;j++) {
                std::cout << ' ';
            }
            for(int j = 0;j <= i;j++) {
                std::cout << "* ";
            }
            std::cout << '\n';
        }
        else {
            for(int j = width;j < i + 1;j++) {
                std::cout << ' ';
            }
            for(int j = i;j < 2*width - 1;j++) {
                std::cout << "* ";
            }
            std::cout << '\n';
        }
    }
    return 0;
}
/*
* 
 *
* *
 *
  *
 * *
* * *
 * *
  *
   *
  * *
 * * *
* * * *
 * * *
  * *
   *
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
0...,(width - 1),width,...,(2*width - 2)

1 1
2 3
3 5
4 7
5 9
*/
