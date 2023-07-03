#include <bits/stdc++.h>
using namespace std;
void fun(stack<int> st)
{
    if (st.size() == 1)
    {
        return;
    }
    else
    {

        st.pop();
        fun(st);
        cout << st.top() << " ";
    }
}

int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    fun(st);
    cout << st.top() << " ";

    return 0;
}