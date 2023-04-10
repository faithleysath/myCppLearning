#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n, sum = 1;
    cin >> n;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++)
            printf("%02d", sum++);
        cout << endl;
    }
    return 0;
}