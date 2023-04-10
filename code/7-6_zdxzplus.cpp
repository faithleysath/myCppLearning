#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string to_upper(string a){
    for (int i = 0; i < a.length(); i++) {
        if ('a' <= a[i] && a[i] <= 'z') {
            a[i] = a[i] - 'a' + 'A';
        }
    }
    return a;
}
int main(){
    string s1;
    getline(cin,s1);
    cout << s1 << endl << to_upper(s1);
    return 0;
}