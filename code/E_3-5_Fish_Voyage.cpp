// P1424
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    int x, n, d;
    cin >> x >> n;
    d = max(6 - x , 0) + (n + x - 8) / 7 * 5 + min((n + x - 8) % 7 , 5);
    cout << 250 * d;
    return 0;
}
