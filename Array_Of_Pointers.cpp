#include <iostream>
using namespace std;

int findMaxMarks(int **p, int *size, int n)
{
    int max = 0, i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < size[i]; j++)
        {
            if (p[i][j] > max)
            {
                max = p[i][j];
            }
        }
    }
    return max;
}

int main()
{

    int class1[] = {40, 50, 70};
    int class2[] = {70, 20, 94, 33, 64};
    int class3[] = {51, 49, 35, 76, 81, 80};

    int *p[3];

    int size[] = {3, 5, 6};

    p[0] = class1;
    p[1] = class2;
    p[2] = class3;

    int marks = findMaxMarks(p, size, 3);

    cout << marks << endl;

    return 0;
}