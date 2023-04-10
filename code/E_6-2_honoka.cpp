// P3741
#include<cstdio>
using namespace std;
int n,ans;
bool flag;
char vk[3];
int main(){
    scanf("%d\n",&n);
    for (int i = 0; i < n; i++) {
        if(i<3) vk[i] = getchar();
        else{vk[0]=vk[1];vk[1]=vk[2];vk[2]=getchar();}
        if(vk[0]=='V'&&vk[1]=='K'&&i!=2)ans++;
        if(!flag&&vk[0]==vk[1]&&vk[1]==vk[2]||i==1&&vk[0]+vk[1]==2*'K'||i==n-1&&vk[1]+vk[2]==2*'V'||n==2&&vk[0]==vk[1])flag = true;
    }
    printf("%d",ans+flag+(vk[1]=='V'&&vk[2]=='K'));
    return 0;
}