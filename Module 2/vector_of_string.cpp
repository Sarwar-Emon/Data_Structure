#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    // int n; cin>>n;
    // vector<string> v(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>v[i];
    // }
    // for(string val:v)
    // {
    //     cout<<val<<endl;
    // }

    // take input with space
    int n; cin>>n;
    getchar();
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        getline(cin,v[i]);
    }

    for(string val:v)
    {
        cout<<val<<endl;
    }
    return 0;
}