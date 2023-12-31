#include<iostream>
using namespace std;
int findFirstoccurence(int *arr,int n,int key)
{
   int s=0;int e=n-1;
   int ans=-1;
   while(s<=e)
   {
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    {
      ans=mid;
      e=mid-1;
    }
    else if(arr[mid]<key)
    {
        s=mid+1;
    }
    else
    {
        e=mid-1;
    }
   } 
   return ans;
}
int findlastoccurence(int *arr,int n,int key)
{
   int s=0;int e=n-1;
   int ans=-1;
   while(s<=e)
   {
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    {
      ans=mid;
      e=mid+1;
    }
    else if(arr[mid]<key)
    {
        s=mid+1;
    }
    else
    {
        e=mid-1;
    }
   } 
   return ans;
}
int main()
{
    int arr[100]={1,2,3,3,4,5,6,7};
    int n=8;
    int key=3;
  
  
    cout<<" the first occurance of the given key is at index->"<< findFirstoccurence(arr,n,key)<<endl;
    cout<<" the last occurance of the given key is at index->"<<findlastoccurence(arr,n,key)<<endl;
   
    return 0;
}