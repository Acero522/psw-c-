/*
дһ������������10���������������0����������(����)֮�͡�С��0����������(������0)֮������������
(������������������0)֮�͡��û���һ����������10�����������ҿ��Բ����κ�˳�򡣳���Ӧ��Ҫ���û���
�����������͸�����
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
    cout << "�����ͣ�" << he1 << "�����ͣ�" << he2 << "���к�:" << he1 + he2 << endl;
    cout << "������(����Y���������������ַ��˳�����)��";
    cin >> is_continue;
    } while (is_continue=='Y'||is_continue=='y');
    return 0;
}
