/*
12.	���ڼ�������n��ƽ�����İͱ����㷨���£�
	1) �Ȳ�һ����guess(���Խ�n/2��Ϊ��һ����)
	2) ����r = n/guess
	3) ��guess= (guess + r)/ 2
	4) ���б�Ҫ���ص�2���ظ���Ρ�����2�Ͳ���3���ظ�����Խ�࣬guess��Խ�ӽ�n��ƽ������
	дһ����������������Ϊn��ֵ���ظ�ִ�аͱ����㷨��ֱ��guess��ǰһ��guess�������1%��Χ�ڣ�������Ϊһ��double���
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
