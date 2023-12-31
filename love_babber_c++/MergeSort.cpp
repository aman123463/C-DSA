#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    //int *first=new int[len1];
    //int *secound=new int[len2];
    int first[len1];
    int secound[len2];
    //copy value 
    int k=s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[k++];
    }
    //copy value 
     //k=mid+1;
     for(int i=0;i<len2;i++)
    {
        secound[i]=arr[k++];
    }
    //merge 2 sorted array 
    int index1=0;int index2=0;
    //k=mainarray index
    k=s;
    while(index1<len1&&index2<len2)
    {
        if(first[index1]<secound[index2])
        {
          arr[k++]=first[index1++]  ;
        }
        else
        {
            arr[k++]=secound[index2++];
        }
    }
    while(index1<len1)
    {
        arr[k++]=first[index1++];
    }
    while(index2<len2)
    {
        arr[k++]=secound[index2++];
    }


}
void mergesort(int arr[],int s,int e)
{
    //base case
    if(s>=e)
    {
       return ; 
    }
    int mid=(s+e)/2;
    //leftpart sort karna hai 
    mergesort(arr,s,mid);
    //right part sort karna hai
    mergesort(arr,mid+1,e);
    //merge
    merge(arr,s,e);

}
int main()
{
    int arr[5]={2,0,1,11,9};
    int n=5;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}