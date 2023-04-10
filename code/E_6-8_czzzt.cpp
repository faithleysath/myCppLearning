// P1598
#include<iostream>
using namespace std;
char s; int ans[333], maxn;
int main(){
    while(cin >> s) ans[s]++;
    for (int i = 'A'; i <= 'Z'; i++) if (ans[i]>maxn) maxn = ans[i];
    for (int i = 0; i < maxn; i++) for (int j = 'A'; j <= 'Z'; j++) cout << (i >= maxn-ans[j] ? '*' : ' ') << (j!='Z' ? ' ' : '\n');
    for (int i = 'A'; i <= 'Z'; i++) cout << (char)i << (i!='z' ? " " : "");
    return 0;
}