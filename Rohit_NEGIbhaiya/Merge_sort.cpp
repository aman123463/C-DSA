#include<iostream>
#include<vector>
using namespace std;
 void merge(int arr[],int s,int mid,int e)
 {
    vector<int>temp(e-s+1);
    int left=s;
    int right=mid+1;
    int index=0;
    while(left<=mid&&right<=e)
    {
        if(arr[left]<=arr[right])
        {
            temp[index++]=arr[left++];
        }
        else
        {
            temp[index++]=arr[right++];
        }
    }
    //left element of array is empty yet 
    while(left<=mid)
    {
        temp[index++]=arr[left++];
    }
     //right element of array is empty yet 
   while(right<=e)
   {
        temp[index++]=arr[right++];
   }
   //copy kar do orignal array me 
   index =0;

   while(s<=e)
   {
    arr[s++]=temp[index++];
   }
 }
void mergesort(int arr[],int s,int e)
{
    //base case 
    if(s>=e)
    {
        return ;
    }
    int mid=s+(e-s)/2;
    //left side 
    mergesort(arr,s,mid);
    //right side 
    mergesort(arr,mid+1,e);
    //merge kar denge 
    merge(arr,s,mid,e);
}
int main()
{
 int arr[10]={5,4,6,1,7,9,10,2,3,8};
 mergesort(arr,0,9);
 cout<<" the sorted array is ->";
 for(int i=0;i<10;i++)
 {
    cout<<arr[i]<<" ";
 }
 return 0;
}