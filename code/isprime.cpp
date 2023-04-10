#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<2 || !(n&1) && n != 2) return 0;
    if(1<n && n<9) return 1;
    for(int i = 3; i*i <= n; i += 2) if (!(n%i)) return 0;
    return 1;
}
int n, ans;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if(isPrime(i))cout << i << ",";
    }
    cout << ans;
    return 0;
}