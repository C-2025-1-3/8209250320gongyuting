#include<iostream>
using namespace std;
int main()
{
	int a ;
	int i=1;
	for (a=2; a < 101; i++)
	{
		a = 2 * a;
	}
	double W;
	for (W = 0.0; a > 2; a = a / 2)
	{
		W = W + 0.8 * (a/2);
	}
	double Q;
	Q = W / (i - 1);
	cout << "每天平均花费为：" << Q << endl;
	return 0;
}