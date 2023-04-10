// P1614
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n, m, num[3001], min, sum = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> num[i];
        sum += num[i];
    }
    min = sum;
    for (int i = m; i < n; i++) {
        cin >> num[i];
        sum += num[i] - num[i-m];
        if(sum < min) min = sum;
    }
    cout << min;
    return 0;
}