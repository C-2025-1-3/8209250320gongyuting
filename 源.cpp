#include<iostream>
using namespace std;
int* f()
{
	int *list=new int[4] { 1,2,3,4 };
	return list;
}
int main()
{

	int* p = f();//函数执行结束以后会销毁地址，变成野指针
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[]p;
	return 0;
}
