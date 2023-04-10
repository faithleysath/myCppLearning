// P5728
#include<iostream>
#include<cstdio>
using namespace std;
#define MAXN 1024
int main(){
    int n, score[3][MAXN], ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> score[0][i] >> score[1][i] >> score[2][i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            ans += (
                (-5 <= score[0][i] - score[0][j] && score[0][i] - score[0][j] <= 5)
                &&(-5 <= score[1][i] - score[1][j] && score[1][i] - score[1][j] <= 5)
                &&(-5 <= score[2][i] - score[2][j] && score[2][i] - score[2][j] <= 5)
                &&(-10 <= score[0][i] + score[1][i] + score[2][i] - score[0][j] - score[1][j] - score[2][j] && score[0][i] + score[1][i] + score[2][i] - score[0][j] - score[1][j] - score[2][j] <= 10));
        }
    }
    cout << ans;
    return 0;
}