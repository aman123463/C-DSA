#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<" the smallest value in the given array is :->"<<min<<endl;
     cout<<" the higest  value in the given array is :->"<<max<<endl;
    return 0;
}
