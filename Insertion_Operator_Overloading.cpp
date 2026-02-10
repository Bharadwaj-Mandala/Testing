#include <iostream>
using namespace std;

class Testing
{
private:
    int a;
    string str;

public:
    void setData(int x, string s)
    {
        a = x;
        str = s;
    }

    friend ostream &operator<<(ostream &, Testing);
};

ostream &operator<<(ostream &dout, Testing t1)
{
    dout << t1.a << endl
         << t1.str << endl;

    return dout;
}

int main()
{
    Testing t1;
    t1.setData(1, "Mydata");

    cout << t1;

    return 0;
}