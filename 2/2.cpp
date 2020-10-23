#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double a, b;
	cout << "Ax = B\n";
	cout << "Введите число a: \n";
	cin >> a;
	cout << "Введите число b: \n";
	cin >> b;
	if (a == 0)
	{
		cout << "На ноль делить нельзя!"  ;
	}
	double x = b / a;
	cout << "x = ";
	cout << x << endl;
	return 0;
}