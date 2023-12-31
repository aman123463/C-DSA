#include<iostream>
using namespace std;
int  sum(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int ans=arr[n-1]+sum(arr,n-1);
       return ans;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    int ans=sum(arr,n);
    cout<<" the sum of array element is :"<<ans<<" ";
    return 0;
}