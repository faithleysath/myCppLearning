#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int k, n = 0, sum = 0, i = 1, j = 0;
    cin >> k;
    while (++n <= k) {
        if(++j > i){
            j = 1;
            i++;
        }
        sum += i;
    }
    cout << sum;
    return 0;
}