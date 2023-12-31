//array assendin element program
//we can also short char data type value 
#include<iostream>
using namespace std;
int main()
{
int arr[1000];
int n;
cout<<" enter size of array:"<<endl;
cin>>n;
cout<<endl;
cout<<" enter array element :"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=n-1;i>0;i--)
{
   int index=i;
   for(int j=i-1;j>=0;j--)
   {
    if(arr[j]>arr[index])
    {
        index=j;
    }
   }
   swap(arr[i],arr[index]);
}
cout<<" the assending order of given array is->"
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
/*

another method from last index 

*/
int array[1000];
int size;
cout<<" enter the size of array:"<<endl;
cin>>size;
cout<<endl<<" enter element you went to insert in array"<<endl;
for(int i=0;i<size;i++)
{
    cin>>array[i];
}
for(int i=size-1;i>0;i--)
{
    int index=i;
    for(int j=i-1;j>=0;j--)
    {
        if(array[j]>array[index])
        {
            index=j;
        }
    }
    swap(array[i],array[index]);
}
cout<<" the assending order of given array is ->";
for(int i=0;i<size;i++)
{
    cout<<array[i]<<"  ";
}
return 0;
}
