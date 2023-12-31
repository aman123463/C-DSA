#include<iostream>
#include<array>
#include<algorithm>
#include<math.h>
using namespace std;
int  Print_sumOfArray(int *arr,int index)
{

    //base case :
    if(index==-1)
    {
        
       return 0;
    }
    cout<<arr[index]<<" ";
     return arr[index]+Print_sumOfArray(arr,index-1);
     
}
int main()
{
    int arr[100];
    int n;
    cout<<" enter the size of array :"<<endl;
    cin>>n;
    cout<<" enter the array elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=Print_sumOfArray(arr,n-1);
    cout<<" the sum of all array element is :"<<ans<<endl;
    return 0;
}
/*
enter the size of array :
7
 enter the array elements :
1
2
3
4
5
6
7
1 2 3 4 5 6 7 7 6 5 4 3 2 1

this is the required output of our prgram */