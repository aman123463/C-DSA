#include<iostream>
using namespace std;
int product(int a,int b)
{
    int c=a*b;
    return c;
}
int main()
{
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a;
    cin>>b;
    cout<<"the value of a  is: "<<a<<" , "<<"the value of b is :"<<b<<endl;
    cout<<"the product of a and b is" <<product(a,b);
    
    
}