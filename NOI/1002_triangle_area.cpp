#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c, s, A;
	cin >> a >> b >> c;
	s = (a + b + c) / 2;
	A = s * (s - a)*(s - b)*(s - c);
	A = sqrt(A);
	//运用海伦公式计算，详见https://en.wikipedia.org/wiki/Heron%27s_formula
	cout << fixed << setprecision(4) << A << endl;
    return 0;
}

