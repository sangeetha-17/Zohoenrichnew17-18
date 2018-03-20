#include <iostream>

using namespace std;

int main() 
{
	int n,b,rev=0,rem=0,num=0;
	cin>>n>>b;
	
	while(n>0)
	{
	    rem=n%b;
	    rev=rev*10+rem;
	    n=n/b;
	}
	
	while(rev>0)
	{
	    rem=rev%10;
	    num=num*10+rem;
	    rev=rev/10;
	}
	cout<<num;
}
