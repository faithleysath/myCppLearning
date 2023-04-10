// P1789
#include<iostream>
#include<cstdio>
using namespace std;
bool matrix[111][111];
int n, m, k, x, y, ans;
int main(){
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++) {
        cin >> x >> y; //火把坐标
        x+=1,y+=1; //外面留两圈做缓冲，防止数组越界
        for (int j = -2; j <= 2; j++) matrix[y][x+j] = matrix[y+j][x] = matrix[y+(j>0)*2-1][x+(j+3)%2*2-1] = 1; //这里的连等代表全部赋值1，前两个分别是十字架的横和竖，第三个实现除十字架外4个角的赋值
    }
    for (int i = 0; i < k; i++) {
        cin >> x >> y; //萤石坐标
        for (int j = y-1; j <= y+3; j++) 
            for (int k = x-1; k <= x+3; k++) 
                matrix[j][k] = 1; //5x5萤石照亮
    }
    for (int i = 2; i < 2+n; i++) 
        for (int j = 2; j < 2+n; j++) 
            ans += matrix[i][j]; //计数点亮区域
    cout << n*n - ans; //总区域-点亮区域
    return 0;
}