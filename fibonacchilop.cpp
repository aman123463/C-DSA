#include<iostream>
using namespace std;
int main()
{
    int num,nextnum;
    cout<<"enterr the number of turms to be printed in fibonacchi series"<<endl;
    cin>>num;
    cout<<endl;
    int first =0,secound=1;
    cout<<first<<" ";
    cout<<secound<<" ";
    for(int i=0;i<num;i++)
    {
     nextnum=first+secound;
     first=secound;
     secound=nextnum;
     cout<<nextnum<<" ";

     //cout<<secound<<" ";
    }
    return 0;
}