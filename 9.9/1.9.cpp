#include <iostream>
using namespace std;


int main()
{
    int second, height;
    cout << "input second\n";
    cin >> second;
    height = 9.8 * second * second;
    height = height / 2;
    cout << "���������ô�ߣ�" << height <<" meters";
    return 0;
}
