#include<iostream>
using namespace std;
char convert(int name)
{
    /*if(name>='A'&&name<='z')
    { 
        return name; 
    }*/
    if(name<='z')
    {
        return name;
    }
   // char ans =name-'a'+'A';
   else
   {
    char ans=name-32;
    return ans;
   }
}
int main()
{   
    int n;
    cout<<"give the size of the string : "<<endl;
    cin>>n;
    char name[n];
    for(int i=0;i<n;i++)
    {
    cin>>name[i];
    }
    for(int i=0;i<n;i++)
    {
    cout<<convert(name[i]);
    }
    return 0;
}