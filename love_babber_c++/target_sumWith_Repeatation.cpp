#include<iostream>
using namespace std;
int subSum(int *arr,int index,int n,int target_Sum)
{
    if(target_Sum==0)
    {
        return 1;
    }
    if(index==n||target_Sum<0)
    {
        return 0;
    }
    return subSum(arr,index+1,n,target_Sum)+subSum(arr,index,n,target_Sum-arr[index]);
}
int main()
{
    int arr[3]{2,3,4};
    int target_sum=6;
    cout<<" the sum is "<<subSum(arr,0,3,target_sum)<<endl;
  
}