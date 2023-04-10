// P5723
#include<iostream>
using namespace std;
int main(){
    int L, n = 0, sum = 0;
    cin >> L;
    for (int i = 2; sum + i <= L; i++) {
        bool is_prime = true;
        for (int j = 2; j*j <= i ; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            sum += i;
            n++;
            cout << i << endl;
        }
    }
    cout << n;
    return 0;
}