// P5015
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    int ans=0;
    string s;
    while(cin>>s)ans+=s.length();
    cout << ans;
    return 0;
}