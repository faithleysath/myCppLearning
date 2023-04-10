#include <iostream>
#include <string>
#include <cstring>
int main(){
    using namespace std;
    char charr[20]{};
    string str;

    cout << "charr中字符串的长度是：" << strlen(charr) << endl;
    cout << "str中字符串的长度是：" << str.size() << endl;
    cout << "请输入一行文本：\n";
    cin.getline(charr,20); // 字符数组用cin.getline()
    cout << "你输入了：" << charr << endl;
    cout << "请再输入一行：\n";
    getline(cin, str); // string字符串用getline(cin,str)
    cout << "你输入了：" << str << endl;
    cout << "输入后charr中字符串的长度是：" << strlen(charr) << endl;
    cout << "输入后str中字符串的长度是：" << str.size() << endl;

// 为何一个getline()是istream的类方法，而另一个不是呢？在引入string类之前，C++就有istream类。
// 因此istream的设计就考虑到了诸如double和int等基本C++数据类型，但没有考虑string类型。
// 所以在istream类中，有处理double、int和其他基本类型的类方法，但没有处理string对象的类方法。
// 那为什么又能使用 cin >> str;呢。这是使用string类的一个友元函数。
    return 0;
}