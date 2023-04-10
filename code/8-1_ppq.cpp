// P1042
#include<iostream>
#include<cmath>
using namespace std;
int f[2]={11,21},n=0;
bool a[25*2500+10];
char t;
int main(){
    while(cin>>t&&t!='E')a[n++]=(t=='W');
    for(int k=0;k<2;k++){
        int w=0,l=0;
        for(int i=0;i<n;i++){
            w+=a[i],l+=!a[i];
            if(max(w,l)>=f[k]&&abs(w-l)>=2){
                printf("%d:%d\n",w,l);
                w=l=0;
            }
        }
        printf("%d:%d\n\n",w,l);
    }
}