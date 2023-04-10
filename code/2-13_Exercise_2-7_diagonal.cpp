// P2181
// Cn4
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    unsigned long long n;
    cin >> n;
    cout << n * (n - 1) / 2 * (n - 2) /3 * (n - 3) / 4 << endl;
    return 0;
}
