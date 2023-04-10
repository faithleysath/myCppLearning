// P1205
#include<iostream>
#include<cstdio>
using namespace std;
int n;
char origin[12][12], target[12][12], tmp[12][12], t[12][12];
void read(char r[12][12]){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> r[i][j];
}
void cpy(char to[12][12], char r[12][12]){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            to[i][j] = r[i][j];
}
void rotation(char r[12][12]){
    cpy(t,r);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            t[i][j] = r[n-1-j][i];
    cpy(r,t);
}
bool isEeq(char to[12][12], char r[12][12]){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(to[i][j]!=r[i][j]) return false;
    return true;
}
int isRotation(){
    for (int i = 1; i < 4; i++) {
        rotation(tmp);
        if (isEeq(tmp,target)) {
            return i;
        }
    }
    return 0;
}
void reflection(char r[12][12]){
    cpy(t,r);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            t[i][j] = r[i][n-1-j];
    cpy(r,t);
}
int main(){
    cin >> n;
    read(origin);
    read(target);
    cpy(tmp,origin);
    int ans = isRotation();
    if (ans) {
        cout << ans;
        return 0;
    }
    cpy(tmp,origin);
    reflection(tmp);
    if (isEeq(tmp,target)) {
        cout << 4;
        return 0;
    }
    if(isEeq(origin,target)){
        cout << 6;
        return 0;
    }
    cout << (isRotation()?5:7);
    return 0;
}