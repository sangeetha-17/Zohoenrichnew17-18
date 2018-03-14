#include<iostream>

using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;
    float a[n][n],b[n],d=1;
    float m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(k=1;k<n;k++)
    {
        m=a[k][0]/a[0][0];
        for(j=0;j<n;j++)
        {
            b[j]=a[0][j]*m;
        }
        for(j=0;j<n;j++)
        {
            a[k][j]=a[k][j]-b[j];
        }
    }
    
    if(a[n-1][1]!=0&&n-1!=1)
    {
        m=a[n-1][1]/a[n-2][1];
        for(j=0;j<n;j++)
        {
            b[j]=a[n-2][j]*m;
        }
        for(j=0;j<n;j++)
        {
            a[n-1][j]=a[n-1][j]-b[j];
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                d*=a[i][j];
            }
        }
    }
    cout<<int(d);
} 
