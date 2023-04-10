// P5707
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    int s, v;
    scanf("%d%d", &s, &v);
    int cost = ceil(1.0 * s / v) + 10;
    int from_zero = 60 * 32 - cost;
    int hh = from_zero / 60 % 24;
    int mm = from_zero % 60;
    printf("%02d:%02d\n", hh, mm);
    return 0;
}
