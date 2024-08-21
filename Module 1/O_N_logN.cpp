#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++) // O(nlog(n))
    {
        int x=i;
        while(x>0) //(log(n))
        {
            int digit= x%10;
            cout<<digit<<" ";
            x=x/10;
        }
        cout<<endl;
    }
    return 0;
}