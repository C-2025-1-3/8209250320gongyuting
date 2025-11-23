#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double F, C;
	cout << "输入华氏温度：" ;
	cin >> F;
	C = ((F - 32) * 5) / 9;
	cout << fixed << setprecision(2);	
	cout << "保留两位小数，并转化为摄氏温度：" << C << endl;	
	return 0;
}