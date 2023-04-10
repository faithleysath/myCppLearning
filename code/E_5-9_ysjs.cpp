// P1319
#include<iostream>
int n,t,cur,flag;
int main(){
    std::cin >> n;
    while(std::cin >> t){
        for (int i = 0; i < t; i++) std::cout << flag << (++cur%n?"":"\n");
        flag = 1 - flag;
    }
    return 0;
}