#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    int n; cin>>n;
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        int a; cin>>a;
        st.push(a);
    }

    int m; cin>>m;
    queue<int>q;
    for(int i=0;i<m;i++)
    {
        int b; cin>>b;
        q.push(b);
    }

    if (st.size() != q.size()) 
    {
    cout << "Not the same" << endl;
    return 0;
}

while (!st.empty()) 
{
    if (st.top() != q.front()) {
        cout << "Not the same" << endl;
        return 0;
    }
    st.pop();
    q.pop();
}

cout << "Same" << endl;


    return 0;
}