#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;
    int * p_updates;
    p_updates = &updates;

    cout << "values:updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl; // *运算符被称为间接值或接触引用运算符，*p_updates 和 updates 等价

    cout << "Address: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates += 1;
    cout << "Now updates = " << updates << endl;
    return 0;
}

// 这说明updates和p_updates只不过是同一枚硬币的两面，updates表示值，用&取得地址。而p_updates表示地址，用*来取得值。
// 使用常规变量时，值是指定的量，而地址为派生量
// 使用指针变量时，地址是指定的值，值是派生量