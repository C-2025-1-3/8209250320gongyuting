#include<iostream>
using namespace std;
int main()
{
	double num1, num2;
	char
		op;//储存运算符
	bool isRunning = true;//控制程序循环
	cout << "！计算器（仅限两个实数之间的运算）！" << endl;
	
	while (isRunning)
	{
		cout << "\n请输入你的运算式：" << endl;

		if (！cin >> num1)
		{
			cout << "错误：第一个操作数必须是数字！" << endl;
		}
		cin>> op;//读取运算符
		if (!cin >> op)
		{
			cout << "错误：运算符输入错误！" << endl;
		}
		if(!cin>>num2)
		{
			cout << "错误：第二个操作数必须是数字！" << endl;
		}
		switch (op)
		{
			case '+':
			cout << "结果是：" << num1 + num2 << endl;
			break;
			case '-':	
			cout << "结果是：" << num1 - num2 << endl;
			case'*':
			cout << "结果是：" << num1 * num2 << endl;
			case'/':
			        if (num2 == 0)
					{
						cout << "错误：除数不能为零！" << endl;
					}
					else
					{
						cout << "结果是：" << num1 / num2 << endl;
					}
					break;
		    default:
				cout << "错误：不支持的运算符！" << endl;
			break;
		}
		return 0;

}