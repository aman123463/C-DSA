#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[30];
    char *m=name;
    char surname[30];
    cout<<"enter two string :"<<endl;
    gets(name);
    gets(surname);
    strcat(name,surname);
    puts(name);
    cout<<sizeof(m);
 
    gets(m);
    puts(m);
    strlwr(name);
    for(int i=0;name[i]!='\0';i++)
    {
      if(name[i]>='A'&&name[i]<'Z')
      name[i]=name[i]+32;
    }
    puts(name);
}