#include<iostream>
using namespace std;
/*
space complexity o(n);
time complexity -o(nlogn)

*/
void merge(int arr[],int s,int e)
{
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *secound=new int[len2];
    int k=s;
    //copy left side value
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[k++];
    }
    //copy right side value
    //k=mid+1; 
    for(int i=0;i<len2;i++)
    {
        secound[i]=arr[k++];
    }
    //merge karna hai sorted array ko
    int index1=0;
    int index2=0;
    k=s;
    while(index1<len1&&index2<len2)
    {
        if(first[index1]<secound[index2])
        {
            arr[k++]=first[index1++];
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
    delete[] first;
    delete[ ]secound;
}
void mergeSort(int arr[],int s,int e)
{
    //base case 
    if(s>=e)
    {
        return ;
    }
    int mid=s+(e-s)/2;
    //left array ko sorte karna hai 
    mergeSort(arr,s,mid);
    //right array ko sort karna hai 
    mergeSort(arr,mid+1,e);
    //merge karna hai sorted array ko 
    merge(arr,s,e);
}
int main()
{
    int arr[5]={3,9,1,2,8};
    int n=5;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"   ";
    }
    return 0;

}