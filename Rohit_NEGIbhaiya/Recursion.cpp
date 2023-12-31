//A function which calls itself again and again until a spacific condition met.which is called base condition 

#include<iostream>
using namespace std;
int  factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    /*int a=n;
    int b=fun(n-1);
    return a*b;*/
    return factorial(n-1)*n;
   /* if(n==1)
    {
        return ;
    }
    if(n%2==0)
cout<<n<<endl;
    fun(n-1);
    if(n%2==0)
    cout<<n<<endl;*/
}
int main()
{
    cout<<"the factorial of the given number is->"<<factorial(5)<<endl;
    return 0;
}