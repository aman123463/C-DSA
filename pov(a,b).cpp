#include<iostream>
#include<math>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two number";
    cin>>a;
    cin>>b;
    int ans=1;
    for(int i=0;i<b;i++)
    {
        ans=ans*a;
      cout<<"the power(a,b) is"<<ans<<endl;

    }

    return 0;

}