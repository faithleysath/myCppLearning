// P5731
#include<iostream>
#include<cstdio>
using namespace std;
int n, num[11][11], tot=1, i=1, j=1;
int main(){
    cin >> n;
    num[1][1] = 1;
    while(tot<n*n){
        while(j+1<=n && !num[i][j+1])num[i][++j]=++tot;
        while(i+1<=n && !num[i+1][j])num[++i][j]=++tot;
        while(j-1>=1 && !num[i][j-1])num[i][--j]=++tot;
        while(i-1>=1 && !num[i-1][j])num[--i][j]=++tot;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            printf("%3d", num[i][j]);
        cout << endl;
    }
    return 0;
}