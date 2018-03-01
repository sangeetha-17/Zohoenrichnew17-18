#include<iostream>

using namespace std;

int main()
{
    int n,count=0,t;
    cin>>n;
    while(n>0)
    {
        if(n&1)
        {
            count++;
        }
        n=n/2;
    }
    cout<<count;
    return 0;
 } 
