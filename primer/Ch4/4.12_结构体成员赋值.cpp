// C++使用户定义的类型与内置类型尽可能相似。
// 比如，可以将结构作为参数传递给函数，
// 也可以让函数返回一个结构。
// 另外，还可以使用赋值运算符（=）将结构赋值给另一个同类型的结构。
// 这样，结构中每个成员都将被设置为另一个结构中相应成员的值，即使成员是数组
// 这个叫做成员赋值（memberwise assignment）

#include <iostream>
using namespace std;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    inflatable bonquet =
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout << "bonquet: " << bonquet.name << " for $"
    << bonquet.price << endl;
    choice = bonquet;
    cout << "choice: " << choice.name << " for $"
    << choice.price << endl;
    return 0;
}