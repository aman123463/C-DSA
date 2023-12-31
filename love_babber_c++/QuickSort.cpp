#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
   int pivot=arr[s];
   int count=0;
   for(int i=s+1;i<=e;i++)
   {
    if(arr[i]<=pivot)
    {
        count++;
    }
   }
   //right place of pivot 
   int pivotindex=s+count;
   swap(arr[pivotindex],arr[s]);
   //pivot value ke left and right bala part sambhal lete hai 
   int i=s,j=e;
   while(i<pivotindex&&j>pivotindex)
   {
    while(arr[i]<pivot)
    {
      i++;
    }
    while(arr[j]>pivot)
    {
        j--;
    }
    //if(i<pivotindex&&j>pivotindex)
    if(arr[i]>=arr[pivotindex]&&arr[j]<arr[pivotindex])
    {
     swap(arr[i++],arr[j--]); 
    }
   }

return pivotindex;
}
void quickSort(int arr[],int s,int e)
{
    //base case
   if(s>=e)
   {
    return ;
   } 
   //partition kar dena array ko
   //it will return right inder where we will do swap pivot value : 
   //in p variable basically return index of partition value 
   int p=partition(arr,s,e);
   //left partition solve karo
   quickSort(arr,s,p-1);
   //right partiton solve karo 
   quickSort(arr,p+1,e);

}
int main()
{
    int arr[25]={6,5,5,6,6,10,54,78,0,23,45,12,78,56,23};
    int n=15;
    int s=0,e=n-1;
    quickSort(arr,s,e);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}