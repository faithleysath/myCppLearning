#include <iostream>
using namespace std;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

// 这里的结构体是在外部声明的，也可以在main函数内部声明，但这样其他函数就不能使用这个结构体。

// C++不提倡使用外部变量，但提倡使用外部结构声明。

// 在外部声明符号常量通常更合理

int main()
{
    inflatable guest = 
    {
        "Glorious Gloria",
        1.88,
        29.99
    };
    inflatable pal = 
    {
        "Audacious Arthur",
        3.12,
        32.99
    };

    cout << "Expand your guest list with " << guest.name
    << " and " << pal.name << "!\n"
    << "You can have both for $"
    << guest.price + pal.price << "!\n";
    return 0;
}