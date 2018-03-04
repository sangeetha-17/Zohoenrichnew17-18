#include <iostream>

using namespace std;

int main() 
{
	int n;
	cin>>n;
	int a[n],i,j,key,count=0;
	
	for(i=0; i<n; i++)
	{
	    cin>>a[i];
	}
	
	for(i=0; i<n; i++)
	{
	    if(a[i] != -1)
	    {
    	    key = a[i];
    	    for(j=i; j<n; j++)
    	    {
    	        if(key == a[j])
    	        {
    	            count++;
    	            a[j] = -1;
    	        }
    	    }
    	    cout<<key<<" --> "<<count<<endl;
    	    count = 0;
	    }
	}
}
