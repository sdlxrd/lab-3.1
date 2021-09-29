#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;
	A = abs(4 * x - 1);
	if (x < 0)
		B = pow(x, 7) - 2 * x;
	if (0 <= x && x < 3)
		B = atan((exp(x) + 1) / 8);
	if (x >= 3)
		B = pow(x, 4) + exp(pow(x, 2) + 3);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y;
	// скорочена форма
	if (x < 0)
		B = pow(x, 7) - 2 * x;
	else
		if (x >= 3)
			B = pow(x, 4) + exp(pow(x, 2) + 3);
		else B = atan((exp(x) + 1) / 8);
	y = A + B;
	cout << "    2) y = " << y;
	cin.get();
	system("pause");
	return 0;
}

