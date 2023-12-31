#include<iostream>
#include<algorithm>
using namespace std;
int kadanes_Algorithm(int *arr,int n)
{
    int prefix=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        prefix+=arr[i];
        maxi=max(maxi,prefix);
        if(prefix<0)
        {
            prefix=0;
        }
    }
    return maxi;
}
int main()
{
    int arr[1000];
    int n;
    cout<<" enter the size:"<<endl;
    cin>>n;
    cout<<" enter the the array element  :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest_sum=kadanes_Algorithm(arr,n);
    cout<<" largest sum in a countiguous subarray is ->"<<largest_sum<<endl;
    return 0;
}