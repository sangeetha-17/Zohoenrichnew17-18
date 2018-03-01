#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int n,l;
    cin>>n>>l;
    int a=n;
    int r=1;
    for(int i=0;i<l;i++)
    {
        while(n>=9)
        {
            r=r*10;
            n=n/10;
        }
        a=((a%r)*10)+n;
        n=a;
        r=1;
    }
    cout<<a;
    
    return 0;
}
