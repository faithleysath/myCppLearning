// P1957
#include<iostream>
#include<cstdio>
#include<string>
#include <stdio.h>
using namespace std;
int i, a, b;
char s[20], last, ans[20];
int main(){
    scanf("%d\n", &i);
    while(i--){
        fgets(s, sizeof(s), stdin);
        if(96<s[0] && s[0]<100) {last = s[0]; s[0] = ' ';}
        sscanf(s, "%d%d", &a, &b);
        switch (last) {
            case 'a': sprintf(ans, "%d+%d=%d",a,b,a+b);break;
            case 'b': sprintf(ans, "%d-%d=%d",a,b,a-b);break;
            case 'c': sprintf(ans, "%d*%d=%d",a,b,a*b);break;
            default:break;
        }
        printf("%s\n%d\n", ans, strlen(ans));
    }
    return 0;
}