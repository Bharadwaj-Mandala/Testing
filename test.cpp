#include <iostream>
using namespace std;

template <class type>
type big(type a, type b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	cout << big(10, 20) << endl;
	cout << big(1.5, 2.9) << endl;
	cout << big('s', 'f') << endl;
	cout << big(111, 29) << endl;
	return 0;
}