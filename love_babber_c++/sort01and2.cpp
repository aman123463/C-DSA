#include<iostream>
using namespace std;
int main()
{
    int arr[9]={2,2,0,1,0,2,2,2,1};
    int n=9;
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]==0)
        {
            i++;
        }
        else if(arr[j]==2)
        {
            j--;
        }
        else if(arr[i]==2 &&arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==2&&arr[j]==1)
        {
            swap(arr[i],arr[j]);
            j--;
        }
        else if(arr[i]==1&&arr[j]==2)
        {
            j--;
        }
        else if(arr[i]==1&&arr[j]==1||arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
        }
        else
        {
            i++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}