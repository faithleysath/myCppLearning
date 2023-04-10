#include <iostream>
#include <string>

int main(){
    using namespace std;
    wchar_t title[] = L"Chief Astrogator";
    char16_t name[] = u"Felonia Ripova"; // 16bit
    char32_t car[] = U"Humber Super Snipe"; // 32bit
    cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << endl; // Raw原始字符串，使用"(和)""
    // 如果要在raw原始字符串中也包含()，则可以把"(改成"+*(，相应的，)"也要改成)+*"
    cout << R"+*("(Who wouldn't?)", she whispered.)+*" << endl;
    // R可以和其他前缀结合使用
    return 0;
}