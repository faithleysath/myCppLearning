#include<iostream>
using namespace std;
int f[10000]={1,1};
int fib(int n){
    if(n<2)return 1;
    int i = 3;
    for (; i < n; i++)
    {
        f[i]=f[i-1]+f[i-3];
    }
    return f[i]+f[i-1]+f[i-2];
}
int main(){
    for (int i = 1; i < 20; i++)
    {
        cout<<fib(i)<<endl;
    }
    
}