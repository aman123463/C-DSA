#include<iostream>
using namespace std;
#include<math.h>
int countdigit(int num )
{
    int count=0,rem;
    while(num)
    {

        rem=num%10;
        num=num/10;
        count+=1;
    }
    return count;
}
bool armstrong(int num,int digit)
{
    int n=num,rem,ans=0;
    while(n)
    {
        rem=n%10;
        n=n/10;
        ans=ans+pow(rem,digit);
    }
    if(ans==num)
    {
      return 1;
    }
    else
    {
      return 0;
    }
}
int main()
{
    int num;
    cout<<"enter any number:"<<endl;
    cin>>num;
    cout<<endl;
    int digit=countdigit(num);
    cout<<"the total digit in the given number is :"<<digit<<endl;
    int ank=armstrong(num,digit);
    if(ank==1)
    {
        cout<<"given number is armstrong"<<endl;
    }
    else
    {
      cout<<"not a armstrong number :"<<endl;
    }
    
    return 0;

}