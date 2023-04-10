// P1601
#include<iostream>
#include<string>
using namespace std;
struct lli {
    string num="0";
    int digit = 0;
    void setValue(string s,bool flag=true){
        num = s;
        digit = s.length();
        if(flag) delZero();
    }
    lli add(lli b){
        string A = "0" + (digit>=b.digit?num:b.num);
        string B = (digit<b.digit?num:b.num);
        int carry=0,digitA,digitB,digitC,i=A.length();
        string zeros(i-B.length(),'0');
        B = zeros + B;
        string C(i,'0');
        while(i--){
            digitA = A[i] - '0';
            digitB = B[i] - '0';
            digitC = digitA + digitB + carry;
            carry = (digitC > 9);
            if(carry)digitC-=10;
            C[i] = digitC + '0';
        }
        return C;
    }
    lli multiply(lli b){
        string A = (digit>=b.digit?num:b.num);
        string B = (digit<b.digit?num:b.num);
        int digitA,digitB,digitC,len=digit+b.digit;
        lli* contributions = new lli[len]();
        string C(len,'0');
        for(int i = 0; i < B.length(); i++){
            digitB = B[i] - '0';
            for(int j = 0; j < A.length(); j++){
                digitA = A[j] - '0';
                contributions[len-i-j-2] += digitA * digitB;
            }
        }
        lli carry(0);
        for(int i = 0; len--; i++){
            lli n = contributions[i];
            n += carry;
            carry = n.pop();
            C[len] = n[n.digit-1];
        }
        delete []contributions;
        return C;
    }
    lli pop(int n=1){
        if(digit<2) return 0;
        else return num.substr(0,digit-n);
    }
    void delZero(){
        int i = 0;
        while(i < digit)if(num[i++]!='0')break;
        setValue(num.substr(i-1,digit-i+2),false);
    }
    char& operator[](int i){return num[i];}
    lli operator+(lli b){return add(b);}
    lli operator*(lli b){return multiply(b);}
    void operator+=(lli b){setValue(*this+b);}
    void operator*=(lli b){setValue(*this*b);}
    void operator=(string s){setValue(s);}
    void operator=(int n){setValue(to_string(n));}
    void operator=(long long n){setValue(to_string(n));}
    bool operator<(lli b){return num<b.num;}
    bool operator>(lli b){return num>b.num;}
    bool operator==(lli b){return num==b.num;}
    bool operator!=(lli b){return num!=b.num;}
    operator string(){return num;}
    lli(){}
    lli(string s){setValue(s);}
    lli(const char s[]){setValue((string)s);}
    lli(int n){setValue(to_string(n));}
    lli(long long n){setValue(to_string(n));}
};
lli operator+(int a,lli b){return b+a;}
lli operator+(long long a,lli b){return b+a;}
lli operator*(int a,lli b){return b*a;}
lli operator*(long long a,lli b){return b*a;}
bool operator>(int a,lli b){return b>a;}
bool operator>(long long a,lli b){return b>a;}
bool operator<(int a,lli b){return b<a;}
bool operator<(long long a,lli b){return b<a;}
bool operator==(int a,lli b){return b==a;}
bool operator==(long long a,lli b){return b==a;}
bool operator!=(int a,lli b){return b!=a;}
bool operator!=(long long a,lli b){return b!=a;}
ostream& operator<<(ostream& os,const lli s){return (os<<s.num);}
istream& operator>>(istream& is,lli& n){
    string s;
    is >> s;
    n = s;
    return is;
}
int main(){
    lli a=123,b=321;
    cout << a*b;
}