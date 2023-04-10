#include<iostream>
#include<cstdio>
using namespace std;
void swap(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}
int main(){
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << b;
    return 0;
}