#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int num, r=0, c,i=0;
	cin >> num;
	c = num;
	while (num>0)
	{
		i = num % 10;
		num = num / 10;
		r = r + pow(i, 3);
	}

	if (r == c)
	{
		cout << "YES";
	}else {
		cout << "NO";
	}
}