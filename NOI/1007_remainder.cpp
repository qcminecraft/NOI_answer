#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	double a, b, r;
	cin >> a >> b;
	cout << fixed << setprecision(2) << fmod(a, b) << endl;
    return 0;
}

