#include<stdio.h>
#include<string.h>

int main() {
    
   char s[100],i,l;
   char vowel[]={'a','e','i','o','u'};
   int count[]={0,0,0,0,0};
   
   fgets(s,100,stdin);
   l=strlen(s)-1;
   s[l]='\0';
   
   for(i=0;i<l;i++)
   {
       if(s[i]!=' ')
       {
           if(s[i]=='a'||s[i]=='A')
           {
               count[0]++;
           }
           else if(s[i]=='e'||s[i]=='E')
           {
               count[1]++;
           }
           else if(s[i]=='i'||s[i]=='I')
           {
               count[2]++;
           }
           else if(s[i]=='o'||s[i]=='O')
           {
               count[3]++;
           }
           else if(s[i]=='u'||s[i]=='U')
           {
               count[4]++;
           }
       }
   }
   for(i=0;i<5;i++)
   {
       if(count[i]!=0)
       {
           printf("%c --> %d\n",vowel[i],count[i]);
       }
   }
}
