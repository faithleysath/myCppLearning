// P1563
#include<iostream>
#include<string>
using namespace std;
const int N=1e5+1;
int n,m,s,ans;
bool face[N],a;
string job[N];

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>face[i]>>job[i];
    for(int i=0;i<m;i++){
        cin>>a>>s;
        ans+=((face[ans]^a)*2-1)*s;
        ans=(ans+n)%n;
    }
    cout<<job[ans];
}