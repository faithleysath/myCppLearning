// P1554
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int M, N, ans[10]={0};
    cin >> M >> N;
    for (int i = M; i <= N; i++) {
        int n = i;
        while (n) {
            ans[n%10]++;
            n /= 10;
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}