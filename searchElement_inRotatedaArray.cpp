#include<iostream>
using namespace std;
int searchElementInRotateArray(int arr[],int n,int target)
{
    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            ans=mid;
        }
        else if (arr[mid]>target)
        {
         end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        
    }

int main()
{
    int arr[2000];
    int n;
    cout<<" enter the size of array :"<<endl;
    cin>>n;
    cout<<" enter the array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<" enter what element you went to find in sorted array :"<<endl;
    cin>>target;
    int search=searchElementInRotateArray(arr,n,target);
    cout<<" the element present in rotate array at index ->"<<search<<endl;
    return 0;
}