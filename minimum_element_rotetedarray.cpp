#include<iostream>
using namespace std;
//4,5,6,7,0,1,2,->>>>>ans=0;
int findmin(int arr[],int n)
{
    int ans=arr[0],start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {
          ans=arr[mid];
          end=mid-1;
        }
    }
    return ans; 
}
int main()
{
    int arr[1000];
    int n;
    cout<<" enter the size of array :"<<endl;
    cin>>n;
    cout<<" enter the array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int index=findmin( arr,n);
    cout<<" the minimum element in rotate array is -> "<<index<<endl;
    return 0;
}