#include<iostream>
using namespace std;
int findIndex(int arr[],int n,int target )
{
    int start=0,end=n-1,mid,index=0;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            index=mid;
        }
        else if(arr[mid]<target)
        {
            start=mid+1;
            index=n;//given element is not comes in array thats by itds comes in size of array hare we can  store element;
        }
        else
        {
           end=mid-1;
           index=mid;
        }
    }
    return index;
}
int main()
{
    int arr[100];
    int n;
    cout<<" enter size of array :"<<endl;
    cin>>n;
    cout<<" enter the array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target ;
    cout<<" enter element which index you went to findout:"<<endl;
    cin>>target;
    int index=findIndex(arr,n,target);
    cout<<" the index for given element in shorted array is ->:: "<<index<<endl;
    return 0;

}