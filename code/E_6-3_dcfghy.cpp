// P1321
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string s;
int boy, girl;
int main(){
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if(s[i]=='b'||s[i+1]=='o'||s[i+2]=='y')boy++;
        if(s[i]=='g'||s[i+1]=='i'||s[i+2]=='r'||s[i+3]=='l')girl++;
    }
    cout << boy << endl << girl;
    return 0;
}