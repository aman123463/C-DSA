#include<iostream>
using namespace std;
int find_minElement(int *arr,int index ,int n)
{
 //base case 
 if(index==n-1)
 {
    return arr[index];
 }
 return min(arr[index],find_minElement(arr, index+1,n));
}
int find_maxElement(int *arr,int index ,int n)
{
 //base case 
 if(index==n-1)
 {
    return arr[index];
 }
 return max(arr[index],find_maxElement(arr, index+1,n));
}
int main()
{
    int arr[10000];
    int n;
    cout<<" enter the size of an array :"<<endl;
    cin>>n;
    cout<<" enter the array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int indexOfMin_element1=find_minElement(arr,0,n);
    cout<<" the minimum value is :"<<indexOfMin_element1<<endl;
    int indexOfMin_element2=find_maxElement(arr,0,n);
    cout<<" the maximum value is :"<<indexOfMin_element2<<endl;
}