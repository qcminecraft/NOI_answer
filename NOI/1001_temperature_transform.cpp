#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float f,c;
	cin >> f;
	c = f - 32;
	c = c / 1.8;
	cout << fixed << setprecision(4) << c << endl;


    return 0;
}

