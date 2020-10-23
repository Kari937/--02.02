using namespace std;
#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	cout << "Введи a: ";
	cin >> a;
	cout << "Введи b: ";
	cin >> b;
	cout << "Введи c: ";
	cin >> c;
	float D = b * b - 4 * a * c;
	cout << "D = ";
	cout << D << endl;
	if (D == 0)
	{
		float x = -b / (2 * a);
		cout << "х = ";
		cout << x << endl;
	}
	else if (D > 0)
	{
		float x1 = (-b + sqrt(D)) / (2 * a);
		float x2 = (-b - sqrt(D)) / (2 * a);
		cout << "х1 =  ";
		cout << x1 << endl;
		cout << "х2 =  ";
		cout << x2 << endl;
	}
	else
	{
		cout << "Коней нет" << endl;
	}
}