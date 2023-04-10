// P2670
#include<iostream>
#define f(i,j,a,b,n,m) for(int i=a;i<=n;i++)for(int j=b;j<=m;j++)
#define ff(n,m) f(i,j,1,1,n,m)
using namespace std;
int n,m,map[111][111];
char t;
int main(){
    cin>>n>>m;
    ff(n,m)map[i][j]=(cin>>t&&t=='*');
    ff(n,m)if(!map[i][j])f(ii,jj,i-1,j-1,i+1,j+1)map[ii][jj]==1&&map[i][j]--;
    ff(n,m+1)cout<<(j==m+1?'\n':(map[i][j]==1?'*':char('0'-map[i][j])));
}