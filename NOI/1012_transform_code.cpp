#include <iostream>

using namespace std;

int main()
{
	int i,i123,i91;
	char a;
	cin >> i;
	i123 = i % 123;
	i91 = i % 91;
	if(i123 >='a' && i123 <='z')
	{
		a = i123;
		cout << a << endl;

	}else
	{
		if(i91>='A' && i91 <='Z')
		{
			a = i91;
			cout << a << endl;

		}else
		{
			cout << "*" << endl;
		}
	}

    return 0;
}