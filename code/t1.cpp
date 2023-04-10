#include <iostream>
using namespace std;

int main()
{
    int n; // 行列数
    cin >> n;
    int cnt = 1; // 统计数字个数
    int num; // 读入的数字
    int cur = 0; // 当前的 0 或 1
    while (cin >> num)
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << cur;
            }
            cout << endl;
        }
        cur = 1 - cur; // 更新 cur 值
    }
    return 0;
}
