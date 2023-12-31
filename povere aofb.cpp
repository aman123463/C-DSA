#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int ans=1;
    int i=0;
    while(i<b)
    {
        ans=ans*a;
        cout<<ans<<endl;
        i++;
    }
}