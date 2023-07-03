#include <bits/stdc++.h>
using namespace std;
void fun(queue<int> st)
{
    if (st.size() == 1)
    {
        return;
    }
    else
    {

        st.pop();
        fun(st);
        cout << st.front() << " ";
    }
}

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    fun(q);
    cout << q.front() << " ";

    return 0;
}