// P5720
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    int a, day = 1;
    cin >> a;
    while (a > 1){
        day++;
        a /= 2;
    }
    cout << day;
    return 0;
}
