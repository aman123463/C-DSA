#include<iostream>
#include<algorithm>
using namespace std;
find3sum(int *arr,int n,int find)
{
    int ans;
    for(int i=0;i<n-2;i++)
    {
        
            ans=find-arr[i];
            int start=i+1;int end=n-1;
            while(start<=end)
            {
                
                if(arr[start]+arr[end]==ans)
                {
                    return 1;
                }
                else if(arr[start]+arr[end]<ans)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        
    }
    return 0;
}
int main()
{
    int n;
    cout<<" enter the size of array :"<<endl;
    cin>>n;
    int arr[1000];
    cout<<" enter the array element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int find=13;
    bool cheak=find3sum(arr,n,find);
    if(cheak)
    {
        cout<<" 3 sum is possible in the given array element possible "<<endl;
    }
    else
    {
        cout<<" 3 sum is not possible in the given array element :"<<endl;
    }
}