//#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	float n;
	cin >> n;
	n = (n * 1000) + n;
	n = n / 7 / 11 / 13;
	//cout << fixed << setprecision(4) << n << endl;
	cout << n << endl;
    return 0;
}

