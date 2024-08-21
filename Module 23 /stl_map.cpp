#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> mp;
   mp["Sayem"]=20;
   mp["sarwar"]=30;
   mp["emon"]=50;

   for(auto it=mp.begin(); it!=mp.end();it++ )
   {
        cout<<it->first<<" ";
        cout<<it->second<<" "<<endl;
   }
    return 0;
}