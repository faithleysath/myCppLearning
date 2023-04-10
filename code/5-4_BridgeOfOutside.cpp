// P1047
#include<iostream>
using namespace std;
#define MAXN 10002
int main(){
    bool ntree[MAXN] = {0};
    int l, m, u, v, ans;
    cin >> l >> m;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        for (int j = u; j <= v; j++) {
            ntree[j] = 1;
        }
    }
    for (int i = 0; i <= l; i++) {
        ans += ntree[i];
    }
    cout << l - ans + 1;
    return 0;
}