#include <iostream>
#include <string>
using namespace std;
const int N = 5e5;
int c1_index[N], c1N;
int c2_index[N], c2N, ic2Max;
int ans;
int find(int n, int l, int r){
    if(l>=r)return r-1;
    int mid = (l+r) / 2;
    if(c2_index[mid] > n)return find(n,l,mid-1);
    else return find(n,mid+1,r);
}
int main(){
    int K;
    string S;
    char c1, c2;
    cin >> K >> S >> c1 >> c2;
    for(int i = 0; i < S.length(); i++){
        if(S[i] == c1) c1_index[c1N++] = i;
        if(S[i] == c2){
            c2_index[c2N++] = i;
            if(i > ic2Max) ic2Max = i;
        }
    }
    for(int i = 0; i < c1N; i++){
        int ic1 = c1_index[i];
        int minr = ic1+K-1;
        if(minr > S.length()-1 || minr > ic2Max)break;
        int ic2 = find(minr,0,c2N); // ic2是在c2_index里离ic1比较近的左边的元素的索引
        while(c2_index[ic2]<minr)ic2++;
        ans += c2N - ic2;
    }
    cout << ans;
    return 0;
}