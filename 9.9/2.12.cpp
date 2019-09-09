/*
12.	用于计算数字n的平方根的巴比伦算法如下：
	1) 先猜一个答案guess(可以将n/2作为第一个答案)
	2) 计算r = n/guess
	3) 令guess= (guess + r)/ 2
	4) 如有必要返回第2步重复多次。步骤2和步骤3的重复次数越多，guess就越接近n的平方根。
	写一个程序，输入整数作为n的值，重复执行巴比伦算法，直到guess与前一个guess的误差在1%范围内，将答案作为一个double输出
*/
#include <iostream>
using namespace std;
    
int main()
{
    double guess1, guess2, r, n;
    cout << "input number:\n";
    cin >> n;

    guess2 = n ;
    guess1 = n / 2;
	   while (((guess2-guess1)/guess2)>0.01)
	   {
		  guess2 = guess1;
		  r = n / guess1;
		  guess1 = (guess1 + r) / 2;
	   }
	   cout << guess1;

    return 0;
}
