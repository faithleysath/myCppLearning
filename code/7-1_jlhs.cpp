// P5735
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double sq(double a){
    return a*a;
}
double ds(double x1, double x2, double y1, double y2){
    return sqrt(sq(x1-x2)+sq(y1-y2));
}
int main(){
    double x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    printf("%.2f",ds(x1,x2,y1,y2) + ds(x1,x3,y1,y3) + ds(x2,x3,y2,y3));
    return 0;
}