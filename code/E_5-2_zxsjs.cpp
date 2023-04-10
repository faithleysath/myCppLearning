// P2141
#include<iostream>
#include<cstdio>
using namespace std;
#define MAXN 20001
int main(){
    int n, ans = 0, num[101];
    bool sum[MAXN] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            sum[num[i]+num[j]] = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        ans += sum[num[i]];
    }
    cout << ans;
    return 0;
}