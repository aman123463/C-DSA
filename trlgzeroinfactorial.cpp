#include<iostream>
using namespace std;
int trailingzero(int num)
{
    int count =0;
    while(num>=5)
    {
        num/=5;
        count=count+num;
    }
    return count;
}
int main()
{
    int num;
    cout<<"enter number :"<<endl;
    cin>>num;
    int zero=trailingzero(num);
    cout<<"the number of zero in the factorial of :"<<num<<" is "<<zero<<endl;
}
/*int factorial(int num)
{
    int ans=1;
    for(int i=1;i<=num;i++)
    {
        ans=ans*i;
    }
    return ans;
}
int main()
{
 int num;
 cout<<"enter the factorial number :"<<endl;
 cin>>num;
 int fact=factorial(num);
 cout<<" the factorail of the given number is :"<<fact<<endl;
 int n=fact;
 int rem,zero=0;
 while(n)
 {
    rem=n%10;
    n=n/10;
    if(rem==0)
    {
        zero=zero+1;
    }
 }
 cout<<"the total number of zero in factorial:"<<fact<<" is "<<zero<<endl;
 return 0;
}*/