// P5727
#include<iostream>
using namespace std;
#define MAXN 205
int main(){
    int n, a[MAXN], i=1;
    cin >> n;
    while (n-1) {
        a[i++] = n;
        n = n & 1 ? 3*n + 1 : n >> 1;
    }
    cout << 1;
    while (--i) {
        cout << " " << a[i];
    }
    return 0;
}