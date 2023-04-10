#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int s = 0, n, i = 0;
    cin >> n;
    while(n--) s += ++i;
    cout << s;
    return 0;
}