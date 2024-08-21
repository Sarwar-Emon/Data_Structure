#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> ConArray(const vector<int>& A, vector<int> &B)
{
    vector<int> c;
    for(int num: B)
    {
        c.push_back(num);
    }
    for(int num:A)
    {
        c.push_back(num);
    }
    return c;
}
int main()
{
    int n; cin>>n;
    vector<int> A(n);
    vector<int>B(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }
    vector<int> c= ConArray(A,B);
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
        // if(i<c.size()-1)
        // {
        //     cout<<" ";
        // }
    }
    cout<<endl;
    
    return 0;
}