#include<iostream>
#include<array>
using namespace std;
int main()
{
    int arr[8]={3,4,-2,5,8,20,-10,8};
    int n=8;
    int Total_sum=0;
    for(int i=0;i<n;i++)
    {
        Total_sum+=arr[i];
    }
    int prefix=0;
    int ans;
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        prefix+=arr[i];
        ans=Total_sum-prefix;
        if(ans==prefix)
        {
            cout<<"division of array in 2 subarray with equal sum is possibile :"<<endl;
            count=1;
            break;
        }
    }
    if(count==0)
    {
        cout<<"division of array in 2 subarray with equal sum is Not possibile :"<<endl;
    }
    return 0;
}

/*int main()
{
    int arr[8]={3,4,-2,5,8,20,-10,8};
    int n=8;
    int count=0;
    int sum1,sum2;
    for(int i=0;i<n-1;i++)
    {
         sum1=0;
         sum2=0;
        for(int j=0;j<=i;j++)
        {
            sum1+=arr[j];
        }
        for(int j=i+1;j<n;j++)
        {
            sum2+=arr[j];
        }
        if(sum1==sum2)
        {
            cout<<"division of array in 2 subarray with equal sum is possibile :"<<endl;
            count=1;
        }
    }
    if(count==0)
    {
        cout<<"division of array in 2 subarray with equal sum is NOT possibile :"<<endl;
    }
    return 0;
}*/