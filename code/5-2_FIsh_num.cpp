// P1427
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n[110], i = -1;
    do {
    cin >> n[++i];
    }while (n[i]);
    while (i--) {
        cout << n[i] << " ";
    }
    return 0;
}