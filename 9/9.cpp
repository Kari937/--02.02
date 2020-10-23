#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
	int a[10] = {};
	int length = 10;
	int n;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < length / 2; i++)
	{
		n = a[i];
		a[i] = a[(length - 1) - i];
		a[length - 1 - i] = n;
	}
	for (int i = 0; i < length; ++i) cout << a[i] << ' ';
	cout << endl;
	return 0;
}