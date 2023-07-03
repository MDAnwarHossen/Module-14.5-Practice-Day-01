#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Mystack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    // list<int> l;
    int size = 0;
    void push(int val)
    {
        size++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;

        // l.push_back(val);
    }
    int top()
    {
        // return l.back();
        return tail->val;
    }
    void pop()
    {
        size--;
        // l.pop_back();
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head == NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }
    bool empty()
    {
        return size == 0 ? true : false;
    }
};

int main()
{
    Mystack st_1;
    Mystack st_2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st_1.push(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st_2.push(x);
    }
    int flag = 1;
    if (st_1.size == st_2.size)
    {
        while (!st_1.empty())
        {
            if (st_1.top() != st_2.top())
            {
                flag = 0;
                break;
            }

            st_1.pop();
            st_2.pop();
        }
    }
    else
    {
        flag = 0;
    }
    flag ? cout << "YES" : cout << "NO";

    return 0;
}