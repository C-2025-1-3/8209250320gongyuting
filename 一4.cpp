//观察下面程序的执行结果。
#include <iostream>  
#include <iomanip>                                  
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//0xfffe   
	cout << "output in unsigned int (oct):" << oct<<testUnint << endl;//<<oct;    
	cout << dec;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;  //为什么结果为-2？
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出	
	system("pause"); 
	double num1 = 65.43;
	double num2 = -65.43;
	double num3 = 65534.99;
	double num4 = -65534.99;
	cout << dec;
	cout << "convert double 65.4321 to int:" << static_cast<int>(num1) << endl;
	cout << "convert double -65.4321 to int:" << static_cast<int>(num2) << endl;	
	cout << "convert double 65534.9999 to int:" << static_cast<int>(num3) << endl;	
	cout << "convert double -65534.9999 to int:" << static_cast<int>(num4) << endl;	
	return 0;
}
//自己编程测试一下将testUnint按8进制输出<<oct; 。将一个实数转换成int，观察结果。