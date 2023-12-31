#include<iostream>
using namespace std;
void print (int arr[],int size,int key)
{
    cout<<" size of array is :"<<size<<endl;
    cout<<" find ->"<<key<<endl;

    for(int i=0;i<size;i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    bool linearsearch(int arr[],int n,int key)
{
   print(arr,n,key);
    if(n==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
     bool ans=linearsearch(arr+1,n-1,key);
     return ans;
   
   
}
int main()
{
    int arr[5]={1,5,2,7,8};
    int n=5;
    int key=1;
    bool ans=linearsearch(arr,n,key);
    if(ans)
    {
        cout<<" element present in the given array :"<<endl;
    }
    else
    {
        cout<<" not present :"<<endl;
    }
}