// C++的enum工具提供了另一种创建符号常量的方式，这种方式可以代替cosnt
// 使用enum的句法和使用结构相似
enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
// 这条语句完成两件事
// 让spectrum成为新类型的名称；spectrum被称为枚举
// 将red、orange、yellow等作为符号常量，它们对应整数值0~7。这些常量叫做枚举量。
// 默认情况下，枚举量的值是0~7，但可以显式地指定
spectrum band; // 声明了一个枚举变量

int main()
{
    band = blue; // 有效的
    band = 2000; // 无效的。因为只能将枚举量赋值给枚举变量。
    ++band; // 无效的，枚举变量没有算术运算
    int color = blue; // 有效的，枚举量是整形，可以整型提升。
    band = 3; // 无效的，int类型不能自动转换为枚举类型
    color = 3 + red; // 有效的
    band = spectrum(3); // 如果int值是有效的，可以通过强制类型转换，将它赋值给枚举变量
    enum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
    // 如果只打算使用常量，而不创建枚举类型的变量，可以省略枚举类型的名称
}