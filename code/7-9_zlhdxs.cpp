// P5740
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
struct student {
    string name;
    int chinese, math, english;
} a, ans;
int main(){
    int n;
    cin >> n;
    ans.math = -1;
    for (int i = 0; i < n; i++) {
        cin >> a.name >> a.chinese >> a.math >> a.english;
        if(a.chinese+a.math+a.english>ans.chinese+ans.math+ans.english)ans=a;
    }
    printf("%s %d %d %d", ans.name.c_str(), ans.chinese, ans.math, ans.english);
    return 0;
}