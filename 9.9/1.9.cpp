#include <iostream>
using namespace std;


int main()
{
    int second, height;
    cout << "input second\n";
    cin >> second;
    height = 9.8 * second * second;
    height = height / 2;
    cout << "尼玛飞了那么高：" << height <<" meters";
    return 0;
}
