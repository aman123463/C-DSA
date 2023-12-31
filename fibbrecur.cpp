#include<iostream>
using namespace std;
void fibonacchi (int n);
int main()
{
    int num;
    cout<<"enter the number of terms to print in fibonacchi series"<<endl;
    cin>>num;
    cout<<endl;
   /* for(int i=0;i<num;i++)
    {
        cout<<fibonacchi(i)<<" ";
    }*/
    fibonacchi(num);
}
void fibonacchi(int n)
{
    int ans1;
    int ans2;
    if(n==0)
    {
        cout<<n<<" ";
        return;
    }
    else if(n==1)
    {
        cout<<n<<" ";
        return ;
    }
    else
    ans1 = fibonacchi(n-1);
    ans2=fibonacchi(n-2);
    cout<<ans1+ans2<<" ";
    return ;
    
}