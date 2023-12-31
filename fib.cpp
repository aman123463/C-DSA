

#include<iostream>
using namespace std;
int fibonacchi(int n);
int main()
{
    int num;
    cout<<"enter nth turm"<<endl;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<fibonacchi(i)<<" ";
    }
}
int fibonacchi(int n);
{
    if(n==0){
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    return fibonacchi(n-1)+fibonacchi(n-2);
}