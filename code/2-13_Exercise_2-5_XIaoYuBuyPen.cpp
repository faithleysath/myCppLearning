// P1421
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    int a, b, c, ans;
    scanf("%d%d", &a, &b);
    c = b + a * 10;
    ans = c / 19;
    printf("%d\n", ans);
    return 0;
}
