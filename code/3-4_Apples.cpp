// P5712
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    int x;
    cin >> x;
    printf("Today, I ate %d apple", x);
    if (x > 1){
        cout << 's';
    }
    cout << '.' << endl;
    return 0;
}
