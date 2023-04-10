// P1425
#include<cstdio>
using namespace std;
int main() {
    int a, b, c, d, e, f, ans;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    ans = (c - a) * 60 + d -b;
    f = ans % 60;
    e = ans / 60;
    printf("%d %d", e, f);
    return 0;
}
