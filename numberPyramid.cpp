#include<iostream>

int main() {
    int height;
    std::cout<<"Enter hieght :";
    std::cin>>height;
    int count = 1;
    int sum = 0;
    for(int k = height;k > 0;k--) {
        sum += k;
    }
    int maxspace = 0;
    for(int k = 1;true;k*=10) {
        if(sum/k == 0) {
            break;
        }
        maxspace++;
    }
    std::cout<<"maxspace"<<maxspace<<'\n';
    for(int i = 0;i < height;i++) {
        for(int j = 0;j < i + 1;j++) {
            std::cout<<count;
            int space = 0;
            for(int k = 10;true;k*=10) {
                if(count/k == 0) {
                    break;
                }
                space++;
            }
            for(int k = space;k < maxspace;k++) {
                std::cout<<' ';
            }
            count++;
        }
        std::cout<<'\n';
    }
    return 0;
}
/*
0 0 1
1 0 2
1 1 3
2 0 4
2 1 5
2 2 6
3 0 7
3 1 8
3 2 9
3 3 10

1
2   3
4   5   6
7   8   9   10
11  12  13  14  15
100 101 102 103 104
*/
