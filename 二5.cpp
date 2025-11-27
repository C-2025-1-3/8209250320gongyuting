#include<iostream>
using namespace std;
int main()
{
	char c;//存储单个字符
	int letter = 0;//英文字母
	int space = 0;//空格
	int number = 0;//数字
	int other = 0;//其他字符
	cout << "请输入一行字符，以回车结束输入：" << endl;
	while (cin.get(c))//单个读取
	{
		if (c == '\n')
			break;
	}
	if ((c >= 'a' && (c <= 'z') || c >= 'A' && (c <= 'Z'))
	{
		letter++;
	else if (c == ' ')
		space++;
	else if (c >= '0' && (c <= '9'))
		number++;
	else
		other++;
	}
	cout << "英文字母有：" << letter << endl;
	cout << "空格有：" << space << endl;
	cout << "数字有：" << number << endl;
	cout << "其他字符有：" << other << endl;
	return 0;
}