#include <iostream>
using namespace std;

// static int counter = 0;

template <class type>
class vector
{
private:
	static inline int counter = 0;
	// static int counter;
	int length;
	int capacity;
	type *ptr;

public:
	vector()
	{
		length = 1;
		capacity = 1;
		ptr = new type[capacity];
	}

	void insert(type data)
	{
		if (counter != 0)
		{
			if (length == capacity)
			{
				capacity = 2 * capacity;
			}
		}

		*(ptr + counter) = data;
		counter = counter + 1;
	}

	void showData()
	{
		for (int i = 0; i < counter; i++)
		{
			cout << *(ptr + i) << endl;
		}
	}
};

// template <typename type>
// int vector<type>::counter = 0;

int main()
{
	vector<int> v1;
	v1.insert(10);
	v1.insert(57);
	v1.showData();
	return 0;
}