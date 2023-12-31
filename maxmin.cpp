#include<iostream>
using namespace std;
int getmin(int num[],int n)
{
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,num[i]);
       /* if(num[i]<min)
        {
            min=num[i];
        }*/
    }
    return mini;
}
int getmax(int num[],int n)
{
  int max=INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(num[i]>max)
    {
        max=num[i];

    }

  }
  return max;
}
int main()
{
    int size;
    cout<<"enter ths array size :-"<<endl;
    cin>>size;
    int arr[200];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"the maximum value in given array is :-"<<getmax(arr,size)<<endl;
    cout<<"the minimum  value in given array is :-"<<getmin(arr,size)<<endl;
    return 0;

}