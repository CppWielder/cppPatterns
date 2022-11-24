#include<iostream>

int main() {
    int height;
    std::cout<<"Enter height of pyramid :";
    std::cin>>height;
    for(int i = 0;i < height;i++) {
        for(int j = height;j > i;j--) {
            std::cout<<"* ";
        }
        std::cout<<'\n';
    }
    return 0;
}
