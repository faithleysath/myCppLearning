// P1328
#include<iostream>
using namespace std;
#define MAXN 200
bool ab[5][5]={{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
int a[MAXN],b[MAXN],n,na,nb,A,B;
int main(){
    cin >> n >> na >> nb;
    for (int i = 0; i < na; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < nb; i++)
    {
        cin >> b[i];
    }
    for (int i = 0,ia=0,ib=0; i < n; i++,ia++,ib++)
    {
        if(ia==na)ia=0;
        if(ib==nb)ib=0;
        A+=ab[a[ia]][b[ib]];
        B+=ab[b[ib]][a[ia]];
    }
    cout << A << " " << B;
    
}