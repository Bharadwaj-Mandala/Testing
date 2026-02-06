#include <iostream>
#include <thread>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct Node
{
    int info;
    Node *link;
};

Node *start = NULL;

Node *createNode()
{
    Node *n;
    n = (Node *)malloc(sizeof(Node));
    return n;
}

void insertNode(int value)
{
    Node *temp, *t;
    temp = createNode();

    temp->info = value;
    temp->link = NULL;

    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        t = start;
        while (t->link != NULL)
        {
            t = t->link;
        }
        t->link = temp;
    }
}

void deleteFirstNode()
{
    Node *r;
    if (start == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        r = start;
        start = start->link;
        free(r);
    }
}

void viewList()
{
    Node *t;
    if (start == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        t = start;
        while (t != NULL)
        {
            cout << t->info << endl;
            t = t->link;
        }
    }
}

int main()
{
    insertNode(10);
    insertNode(22);
    insertNode(33);
    insertNode(7);

    viewList();

    return 0;
}