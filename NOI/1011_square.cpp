#include <iostream>

using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	if (x <=1 && -1<=x) {
		if (y <= 1 && -1 <= y) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

    return 0;
}