#include<iostream>
using namespace std;
int main()
{
    int  a=0,b=1,m=1,i, c;
    cout<<"enter the value of i";
    cin>>i;
    for(m;m<=i;m++)
    {
      cout<<a<<" ";
      c=a+b;
      a=b;
      b=c;
    }
    return 0;
}