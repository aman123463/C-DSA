#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<" enter the size of array:"<<endl;
    cin>>n;
    cout<<" enter 0 and 1 :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    
}