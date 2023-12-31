#include<iostream>
using namespace std;

int bookallocated(int arr[],int n,int M)
{
    //M is the number of child
    //n->size of array
    if(M>n)
    {
        cout<<" not possible:"<<endl;
    }
    int start=0,end=0,mid,ans;
    for(int i=0;i<n;i++)
    {
      /*if(start<arr[i])
        start=arr[i];
        end+=arr[i];*/
        start=max(start,arr[i]);
        end=end+arr[i];

    }
    while(start<=end)
    {
        mid=start+(end-start)/2;
        int page=0,count=1;
        for(int i=0;i<n;i++)
        {
            page+=arr[i];
            if(page>mid)
            {
                count++;
                page=arr[i];
            }
        }
        if(count<=M)
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    cout<<"the minimum pages alloted to m person is ->>"<<ans<<endl;
}
int main()
{
    int arr[1000];
    int n;
    cout<<" enter the size of array:"<<endl;
    cin>>n;
    cout<<" enter the array element:"<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i]; 
    }
    int M=3;
    bookallocated(arr,n,M);
    return 0;
}