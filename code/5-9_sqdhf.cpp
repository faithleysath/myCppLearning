// P2615
#include<iostream>
#include<cstdio>
using namespace std;
#define MAXN 41
int main(){
    int N, matrix[MAXN][MAXN]={0}, K = 1, xK, yK = 1;
    cin >> N;
    xK = (N+1)/2;
    matrix[xK][yK] = K;
    while (++K <= N * N) {
        if (yK == 1 && xK != N) {
            yK = N;
            matrix[++xK][yK] = K;
        }
        else if (xK == N && yK != 1) {
            xK = 1;
            matrix[xK][--yK] = K;
        }
        else if (yK == 1 && xK == N) {
            matrix[xK][++yK] = K;
        }
        else if (yK != 1 && xK != N) {
            if (!matrix[xK+1][yK-1]) {
                matrix[++xK][--yK] = K;
            } else {
                matrix[xK][++yK] = K;
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}