#include <iostream>

using namespace std;

int main() 
{
	string s;
	int i,count=0,l;
	cin>>s;
	l=s.length();
	
	for(i=1;i<l;i++)
	{
	    count++;
	    if(s[i]!=s[i-1])
	    {
	        cout<<s[i-1];
	        if(count>1)
	        {
	            cout<<count;
	        }
	        count=0;
	    }
	}
	cout<<s[l-1];
	if(count>0)
	{
	    cout<<count+1;
	}
}
