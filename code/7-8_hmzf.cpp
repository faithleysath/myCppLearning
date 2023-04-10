// P5461
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool zf[1024][1024];
void hm(int index_x, int index_y, int n){
    if(n==1)return;
    n = n>>1;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) zf[index_y+i][index_x+j] = true;
    hm(index_x+n, index_y, n);
    hm(index_x, index_y+n, n);
    hm(index_x+n, index_y+n, n);
}
int main(){
    int n;
    cin >> n;
    n = pow(2,n);
    hm(0,0,n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << !zf[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}