#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    double s = 0;
    int k, n = 0;
    cin >> k;
    while (s < k)
        s += 1.0 / (++n);
    cout << n;
    return 0;
}