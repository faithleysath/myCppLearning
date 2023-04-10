// P5711
#include<iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    cout << (!(x % 400) || !(x % 4) && x %100) << endl;
    return 0;
}
