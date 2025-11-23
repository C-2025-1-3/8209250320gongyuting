#include<iostream>
using namespace std;
int main()
{
	double r = 0.0, h = 0.0;
	cout << "ÇëÊäÈëÔ²×¶µ×µÄ°ë¾¶£º" << endl;
	if (!(cin >> r)) {
		cout << "ÊäÈë´íÎó" << endl;
		return 1;
	}
	cin >> r;
	cout << "ÇëÊäÈëÔ²×¶µÄ¸ß£º" << endl;
	if (!(cin >> h)) {
		cout << "ÊäÈë´íÎó" << endl;
		return 1;
	}
	const double pi = 3.14159;
	double v = (1.0 / 3.0) * pi * r * r * h;
	cin >> h;
	cout << "Ô²×¶µÄÌå»ýÎª£º" << v << endl;
	return 0;
}