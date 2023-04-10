// P1553
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string inverse(string num){
    if(num.length()==1)return num;
    string ans = "";
    int i = num.length();
    bool isNotZero = false;
    while (i--){
        if(num[i]!='0')isNotZero = true;
        if(isNotZero) ans.push_back(num[i]);
    }
    return ans;
}
string delZero(string num){
    if(num.length()==1)return num;
    int i = num.length();
    while (i--)if(num[i]!='0')break;
    return num.substr(0,i+1);
}
int main(){
    string s;
    cin >> s;
    if(s[s.length()-1]=='%'){
        cout << inverse(s.substr(0,s.length()-1)) + "%";
        return 0;
    }
    int xs = (int)s.find(".");
    if (xs!=-1) {
        cout << inverse(s.substr(0,xs)) + "." + delZero(inverse(s.substr(xs+1,s.length()-xs-1)));
        return 0;
    }
    int fh = (int)s.find("/");
    if (fh!=-1) {
        cout << inverse(s.substr(0,fh)) + "/" + inverse(s.substr(fh+1,s.length()-fh-1));
        return 0;
    }
    cout << inverse(s);
    return 0;
}