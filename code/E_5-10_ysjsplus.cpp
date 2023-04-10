// P1320
#include<iostream>
#include<cmath>
using namespace std;
int cnt=1,ans[10000],i,sum=1;
char t,l;
int main(){
    cin >> l;
    int flag = l-'0';
    while(cin>>t){
        sum++;
        if(l!=t){
            ans[i++] = cnt;
            cnt = 1;
            l = t;
            continue;
        }
        l = t;
        cnt++;
    }
    cout << (int)sqrt(sum) << " ";
    if(flag) cout << "0 ";
    for (int j = 0; j < i; j++) {
        cout << ans[j] << " ";
    }
    cout << cnt;
    return 0;
}