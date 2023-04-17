// addpntrs.cpp -- pointer addition
#include <iostream>
int main()
{
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

    // 这里有两种方式得到数组的地址
    double * pw = wages; // 数组名就是一个指向数组第一个元素的指针
    short * ps = &stacks[0]; // 或者使用地址运算符，对数组的第一个元素取地址
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1; // 将指针变量+1后，其增加的值等于指向的类型占用的字节数。
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;
    // 上面意味着stacks[1]，C++编译器将该表达式看作是*(stacks + 1)，注意，*stacks + 1是给指针指向的值加1，而不是给指针加1
    // 通常，使用数组表示法时，C++都将执行下面这样的转换：arrayname[i] == *(arrayname + i)
    // 如果使用的是指针，而不是数组名，则C++也将执行相同的转换：ptr[i] == *(ptr + i)
    // 因此，在很多情况下，可以使用相同的方式使用指针名和数组名。对于它们，可以使用数组方括号表示法，也可以使用解除引用运算符（*）
    // 在多数表达式中，它们都表示地址。区别在于，数组名是一个常量指针，而指针名是一个变量。
    
    // 另一个区别是，对数组应用sizeof运算符时，得到的是整个数组所占的字节数，而对指针应用sizeof运算符时，得到的是指针本身所占的字节数，即使指针指向的是一个数组，也是如此。
    // 这说明，数组名是这样一个变量，它的值是整个数组内存块的地址，在值上等于第一个元素的地址，但它的附加信息是包含整个内存块的大小。这在下面数组的地址中有体现。

    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";

// 数组的地址
    cout << endl;
    short tell[10];
    cout << tell << endl;
    cout << &tell << endl;
    // 从数字上说，这两个地址相同，但从概念上说，&tell[0]（即tell）是一个2字节内存块的地址，而&tell是一个20字节内存块的地址。
    // 因此，表达式tell + 1将地址值增加2，而表达式&tell + 1将地址值增加20。
    // 换句话说，tell是一个short指针（*short），而&tell指针，是指向包含10个元素的short数组（short(*)[10]）。
    short (*ptell)[10] = &tell;
    cout << sizeof(ptell) << " " << sizeof(*ptell) << endl;
    // 注意，[]的优先级高于*。
    short *pas[20]; // 这会导致pas先与[20]结合，然后再与*结合，导致pas是一个short指针数组，它包含20个元素。也可以看成short* pas[20]。
    // 本人理解，声明中的*和[]表示变量的属性，变量先和[]结合，就代表变量是数组，其次再和*结合，这时效果就和前面的类型名一样，表示数组内部的元素类型。先和*结合，就代表变量是指针，其次再和[]结合，这时效果就和前面的类型名一样，表示指针指向的是数组，并且是类型名的数组。
    // *ptell与tell是等价的，所以(*ptell)[0]为tell数组的第一个元素。
    // 所以我们有如下等式，ptell = &tell = tell = *(ptell) = *(&tell)
    // 但注意，ptell[1]与tell[1]是不等的，ptell[1]是指向tell后方的一个同型数组的指针。
    // ptell之所以会与tell的数值相等，是因为ptell = &(ptell[0]) = &(tell)，而tell数组的首地址与tell[0]的地址恰好相等，又tell=&tell[0]
}