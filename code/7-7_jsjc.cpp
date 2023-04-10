// P5739
#include<iostream>
#include<cstdio>
using namespace std;
//阶乘函数
int fun(int n){
    if(n==1) return 1;
    return n*fun(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}