#include<iostream>

int main() {
    /*Simple pyramid pattern*/
    int h;
    std::cout<<"Enter height of pyramid :";
    std::cin>>h;
    for(int i = 0;i < h;i++) {
        for(int j = 0;j<=i;j++) {
            std::cout<<'*'<<' ';
        }
        std::cout<<'\n';
    }
    return 0;
}
