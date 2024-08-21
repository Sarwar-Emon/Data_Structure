#include <iostream>
#include <vector>

using namespace std;

bool areStacksEqual(vector<int>& stack1, vector<int>& stack2)
 {
    if (stack1.size() != stack2.size())
    {
        return false;
    }

    for (int i = 0; i < stack1.size(); ++i)
     {
        if (stack1[i] != stack2[i])
        {
            return false;
        }
    }

    return true;
}

int main() {
    int N, M;
    cin >> N;
    vector<int> stack1(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> stack1[i];
    }

    cin >> M;
    vector<int> stack2(M);
    for (int i = 0; i < M; ++i) 
    {
        cin >> stack2[i];
    }

    if (areStacksEqual(stack1, stack2))
     {
        cout << "Same Size.\n";
    }
     else {
        cout << "Not same.\n";
    }

    return 0;
}
