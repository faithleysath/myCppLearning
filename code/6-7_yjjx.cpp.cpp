// P1597
#include<iostream>
#include<string>
using namespace std;
string s;
int n[333];
int main(){
    for (int i = 0; i < 10; i++) n['0'+i] = i;
    cin >> s;
    for (int i = 0; i * 5 < s.length(); i++) n[s[i*5]] = n[s[i*5+3]];
    cout << n['a'] << " " << n['b'] << " " << n['c'];
    return 0;
}