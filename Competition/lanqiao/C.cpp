// VB <= A < V(B+1)
// A/(B+1) < V <= A/B
// V in N
// max{A/(B+1)} < V <= min{A/B}, V in N

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N, A, B;
    double l = 0, r = 1e9, t;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> A >> B;
        t = 1.0 * A/(B+1);
        if(t > l) l = t;
        t = 1.0 * A/B;
        if(t < r) r = t;
    }
    cout << ceil(l) << " " << floor(r);
    return 0;
}