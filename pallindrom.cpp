#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[1000];
    int i;
    cout<<"enter a string ;"<<endl;
    gets(s);
    int l=strlen(s);
    for( i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1])
        {
        cout<<" false "<<endl;
        break;
        }
        
    }
    if(i==l/2)
    {
        cout<<" true "<<endl;
    }

    puts(s);
}