//factorial of a number using indirect recursion 
#include<iostream>
using namespace std;
int fun2(int);
int fun1(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*fun2(n-1);
    }
}
int fun2(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*fun1(n-1);
}
int main()
{
   cout<<fun1(5)<<endl; 
}