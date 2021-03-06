#include <iostream>
#include <cmath>

using namespace std;

bool is_triangle(int a,int b,int c)
{
	if(a + b>c && a + c>b && b + c>a)
	{
		return true;
	}else
	{
		return false;
	}
}

bool is_right(int a, int b, int c)
{
	if (pow(a, 2) + pow(b, 2) == pow(c, 2))
	{
		return true;
	}else
	{
		return false;
	}
}

bool is_equilateral(int a, int b, int c)
{
	if(a == b && b == c)
	{
		return true;
	}else
	{
		return false;
	}
}

int main()
{
	int i[3],l[3];
	cin >> i[0] >> i[1] >> i[2];
	if(is_triangle(i[0], i[1], i[2]))
	{
		if(is_right(i[0], i[1], i[2]))
		{
			cout << "Right" << endl;
		}
		if(is_equilateral(i[0], i[1], i[2]))
		{
			cout << "Equilateral" << endl;
		}
		if(!is_right(i[0], i[1], i[2]) && !is_equilateral(i[0], i[1], i[2]))
		{
			cout << "General " << endl;
		}
		
	}else
	{
		cout << "NO" << endl;
	}
	
    return 0;
}

