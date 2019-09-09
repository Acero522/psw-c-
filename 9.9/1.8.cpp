#include <iostream>
using namespace std;


int main()
{
    int n25, n10, n5, output;
    cout << "分别输入25美分，10美分，5美分硬币个数：";
    cin >> n25;
    cin >> n10;
    cin >> n5;
    output = n25 * 25 + n10 * 10 + n5 * 5;
    cout << "你有这么多钱：";
    cout << output;
    return 0;
}
