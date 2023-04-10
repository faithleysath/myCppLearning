// P5709
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    int m, t, s;
    scanf("%d%d%d", &m, &t, &s);
    printf("%d", max(int(m - ceil(s / (t + 0.00001))), 0));
    return 0;
}
