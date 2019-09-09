/*
写一个程序，它读入10个整数，输出大于0的所有整数(正数)之和、小于0的所有整数(负数和0)之和与所有整数
(无论正数、负数还是0)之和。用户可一次性输入这10个整数，而且可以采用任何顺序。程序不应该要求用户单
独输入正数和负数。
*/
#include <iostream>
using namespace std;
    
int main()
{
    int n1;
    char is_continue;
    int he1=0, he2=0, he3=0;
    int count = 10;  
    do
    {
	   cout << "input 10 numbers\n";
	   count = 10;
    while (count>0)
    {
	   cin >> n1;
	   if (n1 > 0) {
		  he1 = he1 + n1;
		  count--;
	   }
	   else
	   {
		  he2 = he2 + n1;
		  count--;
	   }
    }
    cout << "正数和：" << he1 << "负数和：" << he2 << "所有和:" << he1 + he2 << endl;
    cout << "继续吗(输入Y继续，输入其他字符退出程序)：";
    cin >> is_continue;
    } while (is_continue=='Y'||is_continue=='y');
    return 0;
}
