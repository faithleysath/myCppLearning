// P2911
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int s1, s2, s3, pos[88]= {0}, max_pos, ans;
    cin >> s1 >> s2 >> s3;
    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                pos[i+j+k]++;
            }
        }
    }
    max_pos = pos[3], ans = 3;
    for (int i = 4; i <= s1 + s2 + s3; i++) {
        if (pos[i] > max_pos) {
            ans = i, max_pos = pos[i];
        }
    }
    cout << ans;
    return 0;
}