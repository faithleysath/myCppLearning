// P5718
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    int n, i, x, minum = 1000;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x;
        if (x < minum) minum = x;
    }
    cout << minum;
    return 0;
}
