#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1; // length is 0
    string str2 = "ABC";
    cin >> str1; // length is changed
    cout << str2[0]; // have index
    char ch1[] = {"ch1"};
    char ch2[] {"ch2"};
    string str3 = {"str3"};
    string str4 {"str4"};

    ch1 = ch2; // INVALID
    str4 = str2; // can be assigned
    str4 += str3; // "ABCstr3"
}