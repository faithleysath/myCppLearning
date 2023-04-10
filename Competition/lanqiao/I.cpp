#include <iostream>
using namespace std;
const int N = 1e5;
struct Line{
    int time;
    int root;
    int son;
    Line(int u, int v, int t) : time(t), root(u), son(v){}
};
struct Node{
    int root;
    Line lline;
    Line rline;
} tree[N];
int main(){
    int N, K;
    cin >> N >> K;
    for(int i = 0; i < N-1; i++){
        int u, v, t;
        cin >> u >> v >> t;
        if()
    }
    return 0;
}