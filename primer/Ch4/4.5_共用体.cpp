// 共用体（union）是一种数据格式，它能够存储不同的数据类型，但只能同时存储其中的一种类型。
#include <iostream>

union one4all
{
    int int_val;
    long long_val;
    double double_val;
};

// 匿名共用体

struct widget
{
    char brand[20];
    int type;
    union
    {
        long id_num;
        char id_char[20];
    }; // 由于共用体是匿名的，因此id_num和id_char被视为prize的两个成员，它们的地址相同，所以不需要中间标识符id_val
    // 供应提常用于操作系统数据结构或硬件数据结构
};

int main()
{
    using namespace std;
    one4all pail;
    pail.int_val = 15;
    cout << pail.int_val;
    pail.double_val = 1.38;
    cout << pail.double_val;

    widget prize;
    prize.type = 1;
    if (prize.type == 1)
        cin >> prize.id_num;
    else
        cin >> prize.id_char;
}

// 共用体的用途之一是，当数据项使用多种格式，但不会同时使用时，可以节省空间。