using namespace std;
#include <iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	int n = 100;
	double x = -1;
	double res = 0, q = 1, k = 0;
	do
	{
		q = pow((x - 1), k) / k;
		res += q;
		k++;
	} while (k <= n);
	cout << "Полученное значение = " << res << endl;
	cout << "Контрольное значение = " << log10(x) << endl;
	return 0;
}