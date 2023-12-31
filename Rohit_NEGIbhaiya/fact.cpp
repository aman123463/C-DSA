#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int find_power(int n)
{
    if(n==1)
    {
        return 1;
    }
    return pow(n,2)+find_power(n-1);
}
int main()
{
int n;
cout<<" enter the number of terms you wont to power of 2:"<<endl;
cin>>n;
cout<<" the power of 2 in "<<n<<" is ->" <<find_power(n);
return 0;
}
/*void fibbonacchi(int n)
{ 
    if(n==0)
    {
        cout<<0<<" ";
        return ;
    }
    if(n==1)
    {
      cout<<1<<" ";
      return ;=
    }
    cout<< fibbonacchi(n-1)+fibbonacchi(n-2);
    return;
}
int main()
{
    int n;
    cout<<" enter the number of terms you wont fibbonacchi series:"<<endl;
    cin>>n;
    fibbonacchi(n);
    return 0;
}*/
/*int factorial(int n)
{
    if(n==1)
    return 1;
    return n*factorial(n-1);
}
int main()
{
    cout<<" the factorial of the given number is ->"<<factorial(5);
    return 0;
}*/