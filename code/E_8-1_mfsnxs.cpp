// P4924
#include<iostream>
using namespace std;
#define MAXN 501
int ans[MAXN][MAXN],n;
void print(){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) cout << ans[i][j] << " ";
        cout << endl;
    }
}
void init(){
    int sum = 1;
    for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) ans[i][j] = sum++;
}
void rot(int x, int y, int r, int z){
    for(int i = 1; i <= r; i++){
        for(int j = 0; j < 2*i; j++){
            int t = ans[x-i][y-i+j];
            if(z){
                ans[x-i][y-i+j] = ans[x-i+j][y+i];
                ans[x-i+j][y+i] = ans[x+i][y+i-j];
                ans[x+i][y+i-j] = ans[x+i-j][y-i];
                ans[x+i-j][y-i] = t;
            }else{
                ans[x-i][y-i+j] = ans[x+i-j][y-i];
                ans[x+i-j][y-i] = ans[x+i][y+i-j];
                ans[x+i][y+i-j] = ans[x-i+j][y+i];
                ans[x-i+j][y+i] = t;
            }
        }
    }
}
int main(){
    int m, x, y, r, z;
    cin >> n >> m;
    init();
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> r >> z;
        rot(x, y, r, z);
    }
    print();
}