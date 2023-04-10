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
    inflatable hat;
    inflatable woople_cushion;
    inflatable mainframe;
    cout << sizeof hat << endl;
    return 0;
}