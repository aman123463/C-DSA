#include<iostream>
#include<algorithm>
using namespace std;
int max_diffBtw2element(int *arr,int n)
{
    int maxi=INT_MIN;
    
    for(int i=0;i<n-1;i++)
    {
    for(int j=i+1;j<n;j++)
    {
        maxi=max(maxi,arr[j]-arr[i]);
    }
    }
    return maxi;
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
    cout<<" max Diff btw 2 element from left to right is ->"<<max_diffBtw2element(arr,n)<<endl;
    return 0;
}