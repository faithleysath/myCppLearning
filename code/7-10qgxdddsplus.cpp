// P5741
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
struct student {
    string name;
    int chinese, math, english;
} a[1024];
bool check(int x, int y, int z){
    return -z <= x-y && x-y <= z;
}
int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i].name >> a[i].chinese >> a[i].math >> a[i].english;
    }
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            if(check(a[i].chinese,a[j].chinese,5)&&check(a[i].math, a[j].math, 5)&&check(a[i].english, a[j].english, 5)&&check(a[i].chinese+a[i].math+a[i].english,a[j].chinese+a[j].math+a[j].english,10))cout << a[i].name + " " + a[j].name << endl;
        }
    }
    return 0;
}