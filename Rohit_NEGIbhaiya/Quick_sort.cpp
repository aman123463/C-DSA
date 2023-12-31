#include<iostream>
#include<algorithm>
using namespace std;
int partiton(int *arr,int s,int e)
{
   int pos=s;
   for(int i=s;i<=e;i++)
   {
     if(arr[i]<=arr[e])
     {
        swap(arr[i],arr[pos]);
        pos++;
     }
   }
   return pos-1;
}
void Quick_sort(int * arr,int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    int pivot=partiton(arr,s,e);
    //pivot element ke left part ko short kr do 
    Quick_sort(arr,s,pivot-1);
    //pivot element ke right bale part ko sort kar do 
    Quick_sort(arr,pivot+1,e);
    return ;

}
int main()
{
    int arr[1000];
    int n;
    cout<<" enter the size of the array :"<<endl;
    cin>>n;
    cout<<" please enter the element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Quick_sort(arr,0,n-1);
    cout<<"{ <-:sorted form of the array is :-> ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<" }"<<endl;
    return 0;
}
