// P1098
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int p1,p2,p3;
	string s;
	cin>>p1>>p2>>p3>>s;
	for(register int i=1;i<s.length()-1;i++){
		//从字符串的第二位开始循环查找到倒数第二位
                //因为“-”号如果出现在首位或者末尾都肯定是不用管的                                              
		if(s[i]=='-'&&((islower(s[i-1])&&islower(s[i+1])&&s[i-1]<s[i+1])||(isdigit(s[i-1])&&isdigit(s[i+1])&&s[i-1]<s[i+1]))){
			//判断题目中的“约定1”成立                                  
			                                       
			//这里根据p1值的不同只需要对程序做简要的修改
			if(p1==1){
				s.erase(i,1);//删去“-”号所在的那一位
				string spare="";//建立一个空的备用字符串
				for(register int k=s[i-1]+1;k<=s[i]-1;k++){//循环
					char ch=k;
					for(register int j=1;j<=p2;j++) spare.push_back(ch);//在spare的末尾不断插入p2个字母
				}
				if(p3==2) reverse(spare.begin(),spare.end());
                                //如果p3=2就把spare翻转
				s.insert(i,spare);
                                //在s中删去“-”的位置插入spare
			}
			else if(p1==2){
				s.erase(i,1);
				string spare="";
				for(register int k=s[i-1]+1;k<=s[i]-1;k++){
					char ch=k;
					ch=toupper(ch);//将原小写字母转成大写
					for(register int j=1;j<=p2;j++) spare.push_back(ch);
				}
				if(p3==2) reverse(spare.begin(),spare.end());
				s.insert(i,spare);
			}
			else if(p1==3){
				s.erase(i,1);
				string spare="";
				for(register int k=s[i-1]+1;k<=s[i]-1;k++)
					for(register int j=1;j<=p2;j++) spare.push_back('*');//与字母个数相同的星号
				if(p3==2) reverse(spare.begin(),spare.end());
				s.insert(i,spare);
			}
		}
	}
	cout<<s<<endl;
	return 0;
}