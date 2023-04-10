// P5710
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int x; bool p1, p2;
    cin >> x;
    p1 = x % 2 == 0;
    p2 = 4 < x && x <= 12;
    printf("%d %d %d %d\n", p1 && p2, p1 || p2, p1 ^ p2, !(p1 || p2));
    return 0;
}
