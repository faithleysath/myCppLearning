#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    long long ans = 0, tag = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tag *= i;
        ans += tag;
    }
    cout << ans;
    return 0;
}