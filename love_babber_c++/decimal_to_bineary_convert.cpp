//decimal to binary conversion ;
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<" enter value :"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
       int bit=n%2;
       ans=bit*pow(10,i)+ans;
       n=n/2;
       i++;
    }
    cout<<ans<<endl;
}*/


//binary to decimal conversion 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<" enter value :"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int digit=n%10;
        if(digit==1)
        {
            ans=digit*pow(2,i)+ans;
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
}