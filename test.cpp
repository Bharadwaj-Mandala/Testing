#include <iostream>
using namespace std;

template <class type>
class vector
{
private:
	int capacity;
	type *ptr;

public:
	vector(int capacity)
	{
		this->capacity = capacity;
		*ptr = new type[capacity];
	}

	void insert(type data)
	{
		*ptr
	}
};

int main()
{
	cout << big(10, 20) << endl;
	cout << big(1.5, 2.9) << endl;
	cout << big('s', 'f') << endl;
	cout << big(111, 29) << endl;
	return 0;
}