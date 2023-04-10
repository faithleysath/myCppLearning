// P1518
#include<iostream>
using namespace std;
bool map[12][12];//用0表示墙，默认初始化为0，故边上围上一圈墙
int Fx,Fy,Fz,Cx,Cy,Cz,ans,face[4][2]={{-1,0},{0,1},{1,0},{0,-1}},px,py;//x行y列，z是朝向，北东南西0123
string line;//读取一行
void move(int& x, int&y, int& z){
    if(z==4)z-=4;
    px = x+face[z][0], py = y+face[z][1];
    if(map[px][py])x = px, y = py;
    else z++;
}
int main(){
    for (int i = 1; i <= 10; i++)
    {
        cin >> line;
        for (int j = 1; j <= 10; j++)
        {
            char c = line[j-1];
            map[i][j] = (c!='*');
            if(c=='F')Fy = j, Fx = i;
            if(c=='C')Cy = j, Cx = i;
        }
    }
    while(++ans!=1001){
        move(Fx,Fy,Fz);
        move(Cx,Cy,Cz);
        if(Fx==Cx&&Fy==Cy)break;
    }
    cout << (ans==1001?0:ans);
}