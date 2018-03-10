#include <iostream>
#include<sstream>
using namespace std;

int *sort(string s[],int n)
{
    int i,j,temp;
    int *a = new int[n];
    
    for(i=0;i<n;i++)
    {
        stringstream arr(s[i]);
        arr >> a[i];
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    return a;
}

int main()
{
    int n,i;
    cin>>n;
    string s[n],str[n];
    int *a;
    
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    
    a=sort(s,n);
    
    for(i=0;i<n;i++)
    {
        str[i]=to_string(a[i]);
        cout<<str[i]<<" ";
    }
    return 0;
}
