#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int num;
    cout<<"enter the  number:"<<endl;
    cin>>num;
    int rem;
    int ans=0,multi=1;
//converting desimal into binary 

    for( ;num>0; )
    {
      // rem=num%2;nn
       // rem=num%2;
        rem=num&1;
        //num=num/2;
        num=num/2;
       // num/=2;
       //ans=rem*multi+ans;
       ans+=rem*multi;
       multi*=10;
    }
    cout<<ans;
    /*int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    int ans=0;
    for (int i=0;i<n;i++)
    {
        ans =arr[i]*pow(10,i)+ans;
    }
    cout<<"the reverse order of the number is :"<<ans<<endl;
   //this code is for revers the number 
  /* for(int i=n-1;i>=0;i--)
    {
        ans=ans*10+arr[i];
    }
    cout<<ans<<endl;*/
    //int ans=0;
    // ansd this code is for the as itis print the number 
    /*for(int i=0;i<n;i++)
    {
        ans=ans*10+arr[i];
    }
    cout<<" you enter the number is :"<<ans<<endl;*/
    return 0;
}