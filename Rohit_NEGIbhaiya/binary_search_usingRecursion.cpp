#include<iostream>
#include<algorithm>
using namespace std;
int Binary_search(int *arr,int s,int e,int key)
{
   if(s>e)
   {
   return -1;
   }
   
   int mid=s+(e-s)/2;
   if(arr[mid]==key)
   {
    return mid;
   }
   else
   {
   if(arr[mid]<key)
   {
    s=mid+1;
   }
   else
   {
    e=mid-1;
   }
   }
   return Binary_search(arr,s,e,key);

}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    sort(arr,arr+9);
    int n=10;
    int s=0;
    int e=n-1;
    int index=Binary_search(arr,s,e,78);
    cout<<" the element is present at index:"<<index<<endl;
    return 0;
}