#include<iostream>
using namespace std;
int main()
{
    int  a[10]={3,5,7,2,1};
    cout<<"the value at index a[0] is"<<a[0]<<endl;
    cout<<"the value at index a[1] is"<<a[1]<<endl;
    cout<<"the value at index a[2] is"<<a[2]<<endl;
    cout<<"the value at index a[3] is"<<a[3]<<endl;
    cout<<"the value at index a[4] is"<<a[4]<<endl;
    cout<<"the value at index a[0] is"<<a[5]<<endl;
    cout<<"the value at index a[1] is"<<a[6]<<endl;
    cout<<"the value at index a[2] is"<<a[7]<<endl;
    cout<<"the value at index a[3] is"<<a[8]<<endl;
    cout<<"the value at index a[4] is"<<a[9]<<endl;
    int i;
    for(i=0;i<10;i++)
    {
      cout<<"the value is"<<a[i]<<endl;
    }
}