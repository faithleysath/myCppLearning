#include<iostream>
using namespace std;

int main(){
	long long a,b,c=0,num=0;
	cin>>num;
	a=b=1;
	for(int i=3;i<=num;++i){
		c=b+a;
		a=b;
		b=c;
	} 
	cout<<c<<".00";
	return 0;
}