// P5719
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    int n, k, A = 0, B = 0;
    double a = 0, b = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        if (i % k) {b += i; B++;}
        else {a += i; A++;}
    }
    printf("%.1f %.1f", a / A, b / B);
    return 0;
}
