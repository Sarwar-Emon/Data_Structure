#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> st;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.push(a);
    }

    stack<int> tempStack; 
    {
        tempStack.push(st.top());
        st.pop();
    }
    while (!tempStack.empty())
    {
        cout << tempStack.top() << " ";
        st.push(tempStack.top());
        tempStack.pop();
    }
    cout << endl;

    return 0;
}
