// P5732
#include<iostream>
#include<cstdio>
using namespace std;
int matrix[22][22]={1}, n;
int main(){
    cin >> n;
    for (int i = 1; i < n; i++) {
        matrix[i][0] = 1; matrix[i][i] = 1;
        for (int j = 1; j < i; j++)
            matrix[i][j] = matrix[i-1][j] + matrix[i-1][j-1];
    }
    for (int i = 0; i < n; i++) {
        cout << 1;
        for (int j = 1; j <= i; j++) {
            cout << " " << matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}