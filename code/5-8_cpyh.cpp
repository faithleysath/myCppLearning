// P2550
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n, zjnum[7], ans[7]={0}, t, sum;
    cin >> n;
    for (int i = 0; i < 7; i++) {
        cin >> zjnum[i];
    }
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < 7; j++) {
            cin >> t;
            for (int k = 0; k < 7; k++) {
                if (zjnum[k] == t) {
                    sum++;
                    break;
                }
            }
        }
        ans[sum-1]++;
    }
    for (int i = 6; i >= 0; i--) {
        cout << ans[i] << " ";
    }
    return 0;
}