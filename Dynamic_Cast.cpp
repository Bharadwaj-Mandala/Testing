#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base" << endl;
    }
};

class Derived1 : public Base
{
    void print()
    {
        cout << "Derived1" << endl;
    }
};

class Derived2 : public Base
{
    void print()
    {
        cout << "Derived2" << endl;
    }
};

void PrintYourCode(Base *BPtr[10])
{

    for (int i = 0; i < 10; i++)
    {
        BPtr[i]->print();
    }
}

int main()
{
    Derived1 d1;
    Derived2 d2;

    Base *bptr[10];

    bptr[0] = dynamic_cast<Base *>(&d1);
    bptr[1] = dynamic_cast<Base *>(&d2);

    // PrintYourCode(bptr);

    bptr[0]->print();
    bptr[1]->print();
}
