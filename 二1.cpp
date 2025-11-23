#include<iostream>
using namespace std;
int main()
{
	char ch1,ch2;
	cout << "请输入一个字母：";	
	cin >> ch1 ;
	ch2 = ch1 - 32;
	if (ch1>='a' && ch1 <= 'z')
	{
		cout << "转化为大写字母："<< ch2<< endl; 
	}
	else
	{
		int k = ch1;
		cout << k << endl;
	}
	return 0;
}	