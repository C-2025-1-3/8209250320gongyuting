#include<iostream>
#include<cstdlib>
#include<cmath>//数学库
using namespace std;
int main()
{
	double a;
	cout << "请输入一个实数a:";
	if (!(cin >> a)) return 0;

	if (a < 0) {
		cout << "输入为负数，实数平方根不存在" << endl;
		return 0;
	}
	if (a == 0) {
		cout << "a的平方根为: 0" << endl;
		return 0;
	}
	double Xn, Xn1;
	double b;
	Xn = a;
	Xn1 = 0.5 * (Xn + a / Xn);
	b = Xn1 - Xn;
	while(fabs(b)>= 1e-5)//精度最高为1e-19左右
	{
		Xn = Xn1;
		Xn1 = 0.5 * (Xn + a / Xn);
		b = Xn1 - Xn;
	}

	cout << "a的平方根为:" << Xn1 << endl;
	return 0;
}