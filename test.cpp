#include <iostream>
using namespace std;
#include <string.h>

class Strings
{
private:
    char *sPtr;

public:
    Strings() : sPtr(NULL)
    {
        cout << "Constructor" << endl;
    }

    Strings(const char *str)
    {
        cout << "Constructor" << endl;
        sPtr = new char[strlen(str)];
        strcpy(sPtr, str);
    }

    ~Strings()
    {
        cout << "Destructor" << endl;
        if (sPtr != NULL)
        {
            delete sPtr;
        }
    }

    Strings &operator+(Strings &s)
    {

        s.sPtr = strcat(this->sPtr, s.sPtr);

        return s;
    }

    void showString()
    {
        cout << this->sPtr << endl;
    }
};

int main()
{
    Strings s1("Data");
    Strings s2("Test");

    Strings s3;
    s1 = s1 + s2;
    // s3.showString();
}

/*

class Strings
{
private:
    char str[100];

public:
    Strings()
    {
    }

    Strings(const char *str)
    {
        strcpy(this->str, str);
    }

    void showString()
    {
        cout << str << endl;
    }

    void changeData(const char *str)
    {
        strcpy(this->str, str);
    }

    Strings operator+(Strings s)
    {
        Strings temp;
        strcpy(temp.str, strcat(this->str, s.str));
        return temp;
    }

    ~Strings()
    {
        // cout << "Destructor" << endl;
    }
};

int main()
{

    Strings s1("Data");
    Strings s2("this a changed string");

    Strings s3 = s1 + s2;
    s3.showString();
}
    */