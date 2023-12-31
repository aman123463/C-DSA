#include<iostream>
using namespace std;
void painterpartition(int arr[],int n,int M)
{
    int start=0,end=0,mid,ans;
    for(int i=0;i<n;i++)
    {
       /*if(start<arr[i])
         start=arr[i];

         end+=arr[i];*/
         start=max(start,arr[i]);
         end+=arr[i];
    }
    while(start<=end)
    {
        mid=start+(end-start)/2;
        int work=0,painter=1;
        for(int i=0;i<n;i++)
        {
            work=work+arr[i];
            if(work>mid)
            {
                painter++;
                work=arr[i];
            }

        }
        if(painter<=M)
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        
    }
    cout<<"minimum time required to painted all the wall by each painter is "<<ans<<endl;
}
int main()
{
     int arr[1000];
    int n;
    cout<<" enter the total number of walls:"<<endl;
    cin>>n;
    cout<<" enter the number of wall painted by a one painter :"<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i]; 
    }
    int M;
    cout<<" number of painter you wont:"<<endl;
    cin>>M;
    /*int numberofdays=*/painterpartition(arr,n,M);
   // cout<<" the miniomum number of days to paint all walls by "<<M<<"painters is "<<numberofdays<<endl;
    return 0;

}