#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int ch;
    char s[999];
    cout<<"enter a string :"<<endl;
    gets(s);
    int l=strlen(s);
    //strrev(s);
 /*for(int i=0,j=l-1;i<j;i++,j--)
    {
        ch=s[i];
       s[i]=s[l-1-i]; 
       s[l-1-i]=ch;
    }*/
    for(int i=0;i<l/2;i++)
    {
       ch=s[i];
       s[i]=s[l-1-i]; 
       s[l-1-i]=ch;
    }
    puts(s);
    cout<<l;
    return 0;
}