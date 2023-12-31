#include<iostream>
using namespace std;
//find the first occurance 
int firstoccurance(int arr[],int n,int target)
{
    int start=0,end=n-1,first=-1,last=-1;
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

//find out the last occurance
int lastoccurance(int arr[],int n,int target)
{
    int start=0,end=n-1,first=-1,last=-1;
    while(start<=end)
    {
       int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            last=mid;
            start=mid+1;
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
    return last;
    
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
    cout<<" the first occurance  of the given element in sorted array present in ->"<<first<<"  th index"<<endl;
    int last=lastoccurance(arr,n,target);
    cout<<" the last occurance of the given element in sorted array present in ->"<<last <<"th index"<<endl;
    return 0;
}