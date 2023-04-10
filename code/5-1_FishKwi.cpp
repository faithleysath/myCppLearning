// P1428
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n, kwi[110];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> kwi[i];
    }
    cout << 0;
    for (int i = 1; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < i; j++) cnt += (kwi[j] < kwi[i]);
        cout << " " << cnt;
    }
    return 0;
}