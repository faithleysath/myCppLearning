// P1161
#include<iostream>
#include<cstdio>
using namespace std;
#define MAXN 2000001
bool light[MAXN] = {0};
int main(){
    int n, t;
    double a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> t;
        for (int j = 1; j <= t; j++) {
            int z = int(a*j);
            light[z] = !light[z];
        }
    }
    for (int i = 1; i < MAXN; i++) {
        if (light[i]) {
            cout << i;
            break;
        }
    }
    return 0;
}