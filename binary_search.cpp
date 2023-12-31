#include<iostream>
using namespace std;
int Binary_search(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[1000];
    int n;
    cout<<" enter the size of array:"<<endl;
    cin>>n;
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<" how element you went to find in given array:"<<endl;
    cin>>key;
    int cheak=Binary_search(arr,n,key);
    if(cheak==-1)
    {
        cout<<" given element is not present : ";
    }
    else
    {
        cout<<" given element is present at index-> "<<cheak<<endl;
    }
    return 0;

}
    //without function 
   /* int arr[100];
    int n;
    cout<<" enter size of array:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<" enter what element you went to find :"<<endl;
    cin>>key;
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            cout<<" got it"<<endl;
            cout<<" the given element present at index->"<<mid<<endl;
            break;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
    }
    if(start>end)
    {
        cout<<" the element is not present in given array:"<<endl;
    }
    return 0;
}*/