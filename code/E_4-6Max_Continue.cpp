// P1420
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n, num, pre, ans = 1, pre_ans = 1;
    cin >> n >> num;
    for (int i = 0; i < n-1; i++) {
        pre = num;
        cin >> num;
        if (num - 1 == pre){
            if (++ans > pre_ans) pre_ans = ans;
            continue;
        }
        ans = 1;
    }
    cout << pre_ans;
    return 0;
}