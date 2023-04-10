// P1914
#include<iostream>
#include<cstdio>
using namespace std;
int n;
char s[55];
int main(){
    cin >> n >> s;
    for (int i = 0; s[i] ; i++) {
        cout << (char)((s[i] - 97 + n)%26+97);
    }
    return 0;
}