//Find the Number of even elements in a given array of size N
/*
ex->enter the size of array :
6
 enter the array element:
1
3
4
2
5
6
 number of even element present in the given array is :3
*/
#include<iostream>
using namespace std;
int find_numOfEvenElement(int *arr,int index,int n,int even)
{
    if(index==n)
    {
        return even;
    }
    else if(arr[index]%2==0)
    {
        even++;
    }
    return find_numOfEvenElement(arr,index+1,n,even);
}
int main()
{
    int arr[100];
    int n;
    cout<<" enter the size of array :"<<endl;
    cin>>n;
    cout<<" enter the array element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=find_numOfEvenElement(arr,0,n,0);
    cout<<" number of even element present in the given array is :"<<ans<<endl;
    return 0;
}