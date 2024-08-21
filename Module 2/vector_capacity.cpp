#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v;
    //cout<<v.max_size();
    //cout<<v.capacity()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    // cout<<v.size()<<endl;
    // cout<<v.empty()<<endl;
    v.resize(2);
    v.resize(7,3);
    for(int i=0;i<v.size();i++)
    {
     cout<<v[i]<<" ";

    }
    return 0;
}