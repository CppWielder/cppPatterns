#include<iostream>

int main() {
    int nLength;
    std::cout << "Enter length :";
    std::cin >> nLength;
    int n1 = 0,n2 = 0,n3 = 0; 
    for(int i = 0;;) {
        if(i >= nLength) {
            break;
        }
        n1++;
        i++;
        if(i >= nLength) {
            break;
        }
        n2++;
        i++;
        if(i >= nLength) {
            break;
        }
        n3++;
        i++;
        if(i >= nLength) {
            break;
        }
        n2++;
        i++;
    }
    std::cout << n3 << ' ' << n2 << ' ' << n1 << '\n';
    
    for(int i = 0;i < n3;i++) {
        std::cout << "  * ";
    }
    std::cout << '\n';
    for(int i = 0;i < n2;i++) {
        std::cout << " *";
    }
    std::cout << '\n';
    for(int i = 0;i < n1;i++) {
        std::cout << "*   ";
    }
    return 0;
}
/*




*
1  0 0 1


 *
*
2  0 1 1

  *
 *
*
3  1 1 1

  *
 * *
*
4  1 2 1

  *
 * *
*   *
5  1 2 2

  *
 * * *
*   *
6  1 3 2

  *   *
 * * *
*   *
7  2 3 2

  *   *
 * * * *
*   *
8  2 4 2 

  *   *
 * * * *
*   *   *
9  2 4 3
*/
