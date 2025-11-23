#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入三角形的三条边长：" << endl;
	cin >> a >> b >> c;
	int C;
	C = a + b + c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || a == c || b == c)
			cout << "是等腰三角形" << endl;
		else
			cout << "不是等腰三角形" << endl;
		cout << "该三角形的周长为" << C << endl;
	}
	else
		cout<<"此组数据不构成三角形"<<endl;
	return 0;	
}