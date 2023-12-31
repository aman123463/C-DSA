#include<iostream>
using namespace std;
int firstoccurance(int arr[],int n,int target)
{
    int start=0,end=n-1,first=-1;last=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return first;
}
int main()
{
    int arr[1000];
    int n;
    cout<<" enter size of array:"<<endl;
    cin>>n;
    cout<<" enter array element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<" what element you went to find out :"<<endl;
    cin>>target;
    int first=firstoccurance(arr,n,target);
    cout<<" the first of the given element present in ->"<<firat<<"th index"<<endl;
    return 0;
}