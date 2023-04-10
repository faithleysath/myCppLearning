// P1422
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    printf("%.1f", n <= 150 ? 0.4463 * n : 151 <= n && n<= 400 ? 150 * 0.4463 + (n - 150) * 0.4663 : 150 * 0.4463 + (400 - 150) * 0.4663 + (n - 400) * 0.5663);
    return 0;
}
