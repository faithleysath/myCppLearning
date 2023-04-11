#include <iostream>

int main()
{
    using namespace std;


    int * ps = new int;

    cout << ps << endl;
    
    delete ps; // 这将释放ps指向的内存，但不会删除指针本身。

    cout << ps << endl; // 这说明delete不会修改ps指针本身的值。

    int * pt = nullptr; // 空指针，值为0

    cout << pt << endl; 

    delete pt; // 可以删除空指针，而不发生错误

    int jugs = 5;
    pt = &jugs;

    delete pt; // 不能这么做，因为这块地址不是new出来的

    delete ps; // 不能这么做，因为ps指向的内存已经被释放了。

    return 0;
}