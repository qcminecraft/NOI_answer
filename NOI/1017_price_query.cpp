#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i;
	cout << "[1] apples" << endl
		<< "[2] pears" << endl
		<< "[3] oranges" << endl
		<< "[4] grapes" << endl
		<< "[0] Exit" << endl;
	cin >> i;
	double price[4] = { 3, 2.5, 4.1, 10.2 };
	if (i == 0)
	{
		return 0;
	}
	if (i > 0 && i <= 4 && i != 5 && price[i - 1] != 0) {
		cout << fixed << setprecision(1) << "price=" << price[i - 1] << endl;
	}
	else
	{
		cout << "price=" << 0 << endl;
	}
	return 0;
}