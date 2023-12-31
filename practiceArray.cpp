#include<iostream>
using namespace std;
//rotete array given ->find minimum element 
int main()
{
    int arr[1000];
    int n;
    cout<<" enter size of array:"<<endl;
    cin>>n;
    cout<<"enter array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}




//mounting element :

/*
int mountainElement(int arr[],int n)
{
    int start=0,end=n-1,mid,index;
    while(start<=end)
    {
        mid=end+(start-end)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1])
        {
            index=mid;
        }
        else if(arr[mid]>arr[mid-1])
        {
            start=mid+1;
        }
        else
        {
          end=mid-1;
        }
    }
    return index;
}
int main()
{
    int arr[1000];
    int n;
    cout<<" enter size of array:"<<endl;
    cin>>n;
    cout<<"enter array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int index=mountainElement(arr,n);
    cout<<" the mountain element present in index->"<<index<<endl;
    return 0;
}*/