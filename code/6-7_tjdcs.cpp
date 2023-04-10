// P1308
#include<iostream>
#include<cstdio>
#include <stdio.h>
#include<string>
using namespace std;
int ans1=1, ans2, pos;
string word, sentence;
int main(){
    cin >> word;
    getchar(); // 读取上一行的结束符
    getline(cin,sentence);
    for (int i = 0; i < sentence.length(); i++) if(96<sentence[i] && sentence[i]<123) sentence[i]-=32;
    for (int i = 0; i < word.length(); i++) if(96<word[i] && word[i]<123) word[i]-=32;
    int t = (int)sentence.find(" "+ word + " ");
    if(word[0]==sentence[0]&&sentence.find(word+" ")==0) ans2 = 0;
    else if (t!=-1) {
        ans2 = t+1;
    }else if (sentence.find(" "+word)==sentence.length() - word.length() - 1) {
        cout << 1 << " " << sentence.length() - word.length();
        return 0;
    }else {
        cout << -1;
        return 0;
    }
    pos = ans2;
    word = " " + word + " ";
    while(1){
        pos = sentence.find(word,pos+1);
        if(pos==-1)break;
        ans1++;
    }
    cout << ans1 << " " << ans2;
    return 0;
}