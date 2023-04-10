// P5734
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int q, t, a, b;
string str, tmp;
int main(){
    cin >> q >> str;
    while(q--){
        cin >> t;
        switch (t) {
            case 4:
                cin >> tmp;
                cout << (int)str.find(tmp) << endl;
                continue;
            case 1:
                cin >> tmp;
                str.append(tmp);
                break;
            case 2:
                cin >> a >> b;
                str = str.substr(a, b); // a to a+b-1
                break;
            case 3:
                cin >> a >> tmp;
                str.insert(a, tmp); // insert tmp before a
                break;
        }
        cout << str << endl;
    }
    return 0;
}