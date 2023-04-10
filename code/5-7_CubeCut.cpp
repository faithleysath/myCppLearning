// P5729
#include<iostream>
#include<cstdio>
using namespace std;
#define MAXN 22
int main(){
    int w, xx, h, q, x1, y1, z1, x2, y2, z2;
    bool cube[MAXN][MAXN][MAXN] = {0};
    cin >> w >> xx >> h >> q;
    int ans = w * xx * h;
    for (int i = 0; i < q; i++) {
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int x = x1; x <= x2; x++) {
            for (int y = y1; y <= y2; y++) {
                for (int z = z1; z <= z2; z++) {
                    cube[x][y][z] = 1;
                }
            }
        }
    }
    for (int x = 1; x <= w; x++) {
        for (int y = 1; y <= xx; y++) {
            for (int z = 1; z <= h; z++) {
                ans -= cube[x][y][z];
            }
        }
    }
    cout << ans;
    return 0;
}