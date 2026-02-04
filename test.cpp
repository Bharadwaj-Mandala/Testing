#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
using namespace std;

class Testing
{
public:
	void operator()(int x)
	{
		if (x % 2 == 0)
		{
			cout << "Even" << x << endl;
		}
		else
		{
			cout << "Odd" << x << endl;
		}
	}
};

void f1()
{
	int a = 10;
	int *p = NULL;

	*p = 20;
	cout << *p;
}

int main()
{
	int *p = new int;

	return 0;
}