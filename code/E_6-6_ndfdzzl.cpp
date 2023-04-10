// P1200
#include<iostream>
#include<cstdio>
using namespace std;
int sum1=1, sum2=1;
string s1, s2;
int main(){
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++) {
        sum1 *= s1[i] - 64;
    }
    for (int i = 0; i < s2.length(); i++) {
        sum2 *= s2[i] - 64;
    }
    if (sum1 % 47 == sum2 % 47) {
        cout << "GO";
    }else{
        cout << "STAY";
    }
    return 0;
}