#include <iostream>
int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts的值为：" << donuts
    << " 且 donuts的地址为：" << &donuts << endl;
    cout << "cups的值为：" << cups
    << " 且 cups的地址为：" << &cups << endl;
}