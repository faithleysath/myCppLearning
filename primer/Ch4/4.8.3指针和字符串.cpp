#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char flower[10] = "rose";
    cout << flower << "s are red" << endl;
    // 数组名是第一个元素的地址，所以cout中的flower是包含字符r的char元素的地址。cout认为char的地址是字符串的地址，因此它打印该地址处的字符，直到遇到空字符为止。
    // "s are red"是一个字符串字面值，它的地址是一个常量指针，指向字符串的第一个字符。因此和上面的例子一样，cout打印该地址处的字符，直到遇到空字符为止。
    // 既然如此，我们也可以给cout传入一个char指针，而不是数组名。
    char animal[20] = "bear";
    const char * bird = "wren"; // 因为"wren"是字符串字面量，是常量值，所以必须使用const char *，而不能使用char *。这意味着不能修改指针所指向的内容。
    char * ps;
    cout << animal << " and " << bird << endl;
    // cout << ps << endl; // ps未初始化，不能使用
    cout << "Enter a kind of animal: ";
    cin >> animal;
    // cin >> ps; // 错误：ps没有指向被分配的内存
    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl; // 这里进行强制转换的原因是，cout如果接收到char*类型的参数，会把它当成字符串处理，而不是地址。
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;
    return 0;
}
/*
const指针和指向const变量的指针，在写法上容易使人混淆。给大家介绍一种我自己用着比较顺手的区分方法：从右向左，依次结合，const就近结合。

　　比如，int * const p 可以这样进行解读：

　　1、int * ( const p )：变量p 经过 const 修饰，为只读变量。

　　2、int (* (const p))：（const p 现在作为一个整体） 只读变量p是一个指针。

　　3、(int (* (const p)))：（同样的 * const p 作为一个整体） 这个只读的指针p，指向一个int型变量。

　　于是，可以区分出 int * const p 是一个指向 int 型的const指针。



　　再比如，const int * p 可以这样解读：

　　1、const int (* p)：变量p是一个指针。

　　2、（const int） (* p)：（const与就近的 int 结合）这个指针指向 const int 型变量。

　　所以，const int * p 是一个指向 const 整形变量的指针。

　　采用这个方法，相信大家可以自己分辨 int const * p的含义了。

值得注意的是，有的编译器对重复的 const 不会报错！所以允许像 const int const *p; 这种写法。在分析这种“错误”的写法时，只要把重复修饰的const忽略即可。

五、指向 const 变量的 const 指针

　　这种情况是 const 指针和 指向 const 变量的指针的结合，相信大家已经能够自己分析，不再赘述。
*/