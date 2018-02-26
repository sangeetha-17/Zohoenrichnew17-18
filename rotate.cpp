#include <iostream.h>
using namespace std;

int main() {
    string s;
    int n,i,j;
    cin>>s>>n;
    char a;
    int l=s.length();
    for(i=0;i<n;i++)
    {
        a=s[0];
       for(j=0;j<l-1;j++)
       {
           s[j]=s[j+1];
       }
        s[l-1]=a;
    }
    cout<<s;
    return 0;
}
