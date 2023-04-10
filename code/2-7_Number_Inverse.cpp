// P5705
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double input;
    int bit, ten, hundreds, kilo;
    cin >> input;
    int num = input * 10;
    bit = num % 10;
    num /= 10;
    ten = num % 10;
    num /= 10;
    hundreds = num % 10;
    kilo = num / 10;
    cout << bit + ten * 0.1 + hundreds * 0.01 + kilo * 0.001 << endl;
    return 0;
}
