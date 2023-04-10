// P5736
#include<iostream>
#include<cstdio>
using namespace std;
bool isPrime(int n){
    if(n<2 || !(n&1) && n != 2) return 0;
    if(1<n && n<9) return 1;
    for(int i = 3; i*i <= n; i += 2) if (!(n%i)) return 0;
    return 1;
}
int main(){
    int n;
    cin >> n;
    while(cin >> n)if(isPrime(n))cout << n << " ";
    return 0;
}