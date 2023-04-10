// P5742
#include<iostream>
#include<cstdio>
#define MAXN 1024
using namespace std;
int n, x, ans;
struct student {
    int id, academic, quality;
    int overall;
    student(int _id, int _ac, int _qu){
        this->id = _id;
        this->academic = _ac;
        this->quality = _qu;
        this->overall = 7 * _ac + 3 * _qu;
    }
    student(){}
    int sum(){
        return this->academic + this->quality;
    }
};

bool is_excellent(student s){
    return s.sum() > 140 && s.overall >= 800;
}
int main(){
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp_id, tmp_ac, tmp_qu;
        cin >> tmp_id >> tmp_ac >> tmp_qu;
        student one_student(tmp_id,tmp_ac,tmp_qu);
        if(is_excellent(one_student))
            cout << "Excellent" << endl;
        else
         cout << "Not excellent" << endl;
    }
    return 0;
}