//P3397
#include<iostream>
#include<cstdio>
using namespace std;
#define MAXN 1005
int main(){
    int n, m, map[MAXN][MAXN] = {0}, x1, y1, x2, y2;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int y = y1; y <= y2; y++) {
            for (int x = x1; x <= x2; x++) {
                map[x][y]++;
            }
        }
    }
    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            cout<< map[x][y] << " ";
        }
        cout << endl;
    }
    return 0;
}