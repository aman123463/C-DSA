#include<iostream>
using namespace std;
int mineatingspeed(int piles[],int n,int h)
{
    int start=0,end=0,mid,ans;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=piles[i];
        end=max(end,piles[i]);
    }
    start=sum/h;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        int total_time=0;
        for(int i=0;i<n;i++)
        {
          total_time+=piles[i]/mid;
          if(piles[i]%mid)
          {
            total_time++;
          }
        }
        if(total_time>h)
        {
            //required time se jyada jaldi kha le ra he 
            //koko ko jyada banana khanab padega 
            start=mid+1;
        }
        else
        {
            //speed jyada he kam karo
            ans=mid;
            end=mid-1;
        }
    }
    return ans;
}
int main()
{
    int piles[1000];
    int n;
    cout<<" enter the number of piles of banana   :"<<endl;
    cin>>n;
    cout<<"enter number of bananas in one stall :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>piles[i];
    }
    int h;
    cout<<" enter min hours to eat banana :->"<<endl;
    cin>>h;
    int minimum_hours=mineatingspeed(piles,n,h);
    cout<<" the minimum hours to eat banana ->"<<minimum_hours<<endl;
    return 0;
}