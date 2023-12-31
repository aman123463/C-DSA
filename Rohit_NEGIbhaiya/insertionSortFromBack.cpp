#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<" enter the size of  array :"<<endl;
    cin>>n;
    cout<<" enter the array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<" insertion sort from back in assending order "<<endl;
    for(int i=n-2;i>=0;i--)
    {
        for(int j=i;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])//(< or > symboll deside our array will be sort in assending order or decending order )
            {
                swap(arr[j],arr[j+1]);
            }
            else
            {
                break;
            }
        }
    }
    cout<<" now output is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"   ";
    
    }
    return 0;
}
