#include <iostream>
#include <ctime>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main()
{
	int a[10]{};
	int length = 10;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << " ";
	}
	cout << "\n";
	sort(a, a + 10);
	for (int i = 0; i < length; ++i) cout << a[i] << " ";
}