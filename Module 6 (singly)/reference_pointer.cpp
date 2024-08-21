#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void fun(int *&p)
{
    cout<<&p<<endl;
}
int main()
{
    int v=10;
    int* ptr=&v;
    fun(ptr);
    cout<<&ptr<<endl;
    return 0;
}