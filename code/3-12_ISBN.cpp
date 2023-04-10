// P1055
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    char a, b, c, d, e, f, g, h, i, j;
    int check;
    scanf("%c-%c%c%c-%c%c%c%c%c-%c", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    check = (a - 48) + 2 * (b - 48) + 3 * (c - 48) + 4 * (d - 48) + 5 * (e - 48) + 6 * (f - 48) + 7 * (g - 48) + 8 * (h - 48) + 9 * (i - 48);
    check %= 11;
    if (j - 48 == check || j == 'X' && check == 10)
        cout << "Right" << endl;
    else
        printf("%c-%c%c%c-%c%c%c%c%c-%c\n", a, b, c, d, e, f, g, h, i, check == 10 ? 'X' : char(check + 48));
    return 0;
}
