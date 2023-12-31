#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int smallproblum=factorial(n-1);
    int biggerproblum=n*smallproblum;
    return biggerproblum;
}
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<"the factorial of:"<<n<<"  is-  "<<ans<<endl;
    return 0;
}