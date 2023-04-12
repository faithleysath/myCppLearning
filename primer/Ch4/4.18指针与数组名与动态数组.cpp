#include <iostream>
using namespace std;
int main()
{
    double * p3 = new double [3]; // 为3个double分配内存
    cout << sizeof(p3) << endl; // 这说明用sizeof获取到的是p3指针本身的大小
    p3[0] = 0.2; // 为第1个元素赋值
    p3[1] = 0.5; // 为第2个元素赋值
    p3[2] = 0.8; // 为第3个元素赋值
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1; // 将p3指向第2个元素
    // 上面这一行指出了数组名和指针的一个重要区别。数组名是一个常量，不能被修改，而指针是一个变量，可以被修改。
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1; // 将p3指向第1个元素，以便释放内存。
    delete [] p3; // 释放内存
    return 0;
}