#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<" enter the size of array :"<<endl;
    cin>>n;
    cout<<" enter the array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<" now sort array in assending order :"<<endl;
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]>arr[j-1])//here > decide sort in decending order ||in place of > when we use < so our array will be sort in assending order  
            {
                swap(arr[j],arr[j-1]);
            }
            else
            {
                break;
            }
        }
    }
    cout<<" now print the assending order array :"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"    ";
    }
    return 0;

}