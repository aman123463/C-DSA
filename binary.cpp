#include<iostream>
using namespace std;
int main()
{
 int num=13,mul=1;
 int rem=0,ans=0;
 while(num)
 {
    rem=num&1;
    //in place we can use 
    num>>1;
   // num/=2;
    ans=rem*mul+ans;
    mul*=10;
 }
 cout<<ans<<endl;
}