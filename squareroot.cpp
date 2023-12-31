#include<iostream>
using namespace std;
int squarerootcheak(int arr[],int n,int target)
{
    int start=1,end=target;
    int ans=0;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(mid*mid==target)
        {
          ans=mid;
          break;
        }
        else if(mid*mid<target)
        {
          ans=mid;
          start=mid+1;  
        }
        else
        {
            end=mid-1;
        }

    }
    return ans;
}
int main()
{
    int arr[1000];
    int n;
    cout<<" enter which number you went to know squareroot :"<<endl;
    cin>>n;
    cout<<" enter  array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target=n;

    int squareroot=squarerootcheak(arr,n,target);
    cout<<" the squareroot of given number is ->"<<squareroot<<endl;
}