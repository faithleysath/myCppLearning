#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n1 = 8, t1 = 30, n2 = 10, t2 = 6;
    int t3 = 10;
    double inc_rate = (1.0 * n1 * t1 - n2 * t2) / (t1 - t2);
    double init_num = n2 * t2 - inc_rate * t2;
    double ans = (init_num + t3 * inc_rate) / t3;
    cout << ans << endl;
    return 0;
}
