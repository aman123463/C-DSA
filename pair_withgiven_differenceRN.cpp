#include<iostream>
using namespace std;
#include<math.h>
int solve(int arr[],int n,int target)
{
    int start=0;
    int and=1;
    while(start<and)
    {
        if(arr[and]-arr[start]==target)
        {
           return 1;
        }
        else if(arr[and]-arr[start]<target)
        {
            and+=1;
        }
        else
        {
            start+=1;
            
        }

    }
    return -1;
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
    int target;
    cout<<" given me difference the number :"<<endl;
    cin>>target;
    int find_difference=solve(arr,n,target);
    if(find_difference==-1)
    {
        cout<<" given difference is not present in the array:"<<endl;
    }
    else
    {
      cout<<" the given difference is present "<<endl; 
    }
    return 0;

}