#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) //O(n)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++) //O(n)
    {
        sum=sum+a[i];
    }
    cout<<sum<<endl;
    return 0;
}