#include<iostream>
using namespace std;
int mountain_element(int arr[],int n)
{
    int start=0;int end=n-1;int mid;int index;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        {
            index=mid;
            break;
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
    cout<<"enter size of array:"<<endl;
    cin>>n;
    cout<<" enter array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int index=mountain_element(arr,n);
    cout<<" the index of mountain element is :->"<<index<<endl;
    return 0;
}