#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	int c = a, d = b;
	if (a > 0 && b > 0)
	{
		while (b != 0)
		{
			int r = a % b;
			a = b;
			b = r;
		}
		cout << "最大公约数为：" << a << endl;
		int t = (c * d) / a;
		cout << "最小公倍数为：" << t << endl;
	}
	else
	{
		cout << "输入错误，请输入正整数！" << endl;
	}
	return 0;
}