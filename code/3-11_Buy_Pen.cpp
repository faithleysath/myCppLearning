// P1909
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    int n, num, price, totoal, minum = 100000000;
    cin >> n;
    cin >> num >> price;
    totoal = price * ceil(1.0 * n / num);
    minum = (totoal < minum) ? totoal : minum;
    cin >> num >> price;
    totoal = price * ceil(1.0 * n / num);
    minum = (totoal < minum) ? totoal : minum;
    cin >> num >> price;
    totoal = price * ceil(1.0 * n / num);
    minum = (totoal < minum) ? totoal : minum;
    cout << minum;
    return 0;
}
