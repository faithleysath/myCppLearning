#include <iostream>
using namespace std;
int main()
{
// 1.声明指针
    // typename * pointername;
    double * pn;
    char * pc;
// 2.给指针赋值
// 可以对变量名应用&运算符，以获得该变量的地址。也可以用new运算符返回未命名的内存块的地址。
    double * pa;
    double bubble = 3.2;
    pn = &bubble;
    pc = new char;
    pa = new double[30];
// 3.对指针解除引用
    // 即获得指针指向的值
    cout << *pn << endl;
    *pc = 'a';
    cout << *pc << endl;
    // 另一种解除引用的方法是使用数组表示法

// 4.区分指针和指针所指向的值
    // 若pt是指向int的指针，则*pt是int，pt是int *。

// 5.数组名
    // 数组名是一个特殊变量，它既有指针性质，又有常规值的性质。指针性质上，它的值等于数组第一个元素的地址，常规值上，它代表整个数组。所以sizeof运算符的结果是整个数组所占的字节数。
    // 要指向数组名，则需要声明typename(*)[n]类型的指针，并对数组名取&。而这个指针，用size还是其本身的大小。
    // 在多数情况下，C++将数组名视为数组的第一个元素的地址
    // 一个例外情况是，当将数组名用作sizeof运算符的操作数时，将得到整个数组所占的字节数。而指针的sizeof运算符的结果是指针本身所占的字节数。

// 6.指针算数
    // C++允许将指针和整数相加。加1的结果等于原来的地址加上指向的对象占用的总字节数。
    // 还可以将一个指针减去另一个指针，获得两个指针之差。这将得到一个整数，仅当两个指针指向同一个数组中的元素（也可超出结尾一个位置）时才有意义。这将得到两个元素之间的间隔。

// 7.数组的动态联编和静态联编
    // 使用数组声明时，编译器将数组的大小编译到程序中。这种联编称为静态联编。
    int tacos[10]; // 静态联编
    // 使用new[]运算符创建数组时，将采用动态联编。这意味着，编译器将不会将数组的大小编译到程序中，而是在运行时动态分配内存。使用完毕后，可以使用delete[]运算符释放内存。
    
// 8.数组表示法和指针表示法
    // 使用方括号数组表示法等同于对指针解除引用。
    // 数组名和指针变量都是如此，因此对于指针和数组名，既可以使用数组表示法，也可以使用指针表示法。
    // tacos[0] means the same as *tacos and *(tacos + 0)
    // tacos[1] means the same as *(tacos + 1)
}