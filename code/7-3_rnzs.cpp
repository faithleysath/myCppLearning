// P5737
#include<iostream>
using namespace std;
int main()
{
  int a,b,s=0;
  cin>>a>>b;
  for(register int i=a; i<=b; i++)
    if(i%400==0||i%4==0&&i%100)
      s++;
  cout<<s<<endl;
  for(register int i=a; i<=b; i++)
    if(i%400==0||i%4==0&&i%100)
      cout<<i<<' ';
  return 0;
}