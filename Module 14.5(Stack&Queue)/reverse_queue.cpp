#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    queue<int> q;
    for(int i = 0; i < n; i++)
    {
        int a; 
        cin >> a;
        q.push(a);
    }

    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    queue<int> reversedQueue;
    while (!st.empty())
    {
        reversedQueue.push(st.top());
        st.pop();
    }

    while (!reversedQueue.empty())
    {
        cout << reversedQueue.front() << " ";
        reversedQueue.pop();
    }
    cout << endl;

    return 0;
}
