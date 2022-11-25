#include<iostream>

int main() {
    int height;
    std::cout<<"Enter height :";
    std::cin>>height;
    for(int i = 0,k = 1;i < 2*height - 1;i++) {
        int j = 0;
        if(i < height) {
            while(j <= i) {
                std::cout << '*';
                j++;
            }
        }
        else {
            while(j < i - k) {
                std::cout << '*';
                j++;
            }
            k+=2;
        }
        std::cout << '\n';
    }        
    return 0;
}
/*

*
**
***
**** 
***
**
*

height - 1
height+1 - 3
height+2 - 5

*/
