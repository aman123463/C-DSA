#include <iostream>
using namespace std;
#include <stdlib.h>
#include<algorithm>
#include<math.h>
/*int solve(int arr[],int n,int target)
{
    int start=0;
    int and=1;
    while(and<n)
    {
        if(arr[and]-arr[start]==target)
        {
           return 1;
        }
        else if(arr[and]-arr[start]<target)
        {
            and=and+1;
        }
        else
        {
            start=start+1;
            
        }

    }
    return -1;
}*/
int main()
{
    int arr[1000];
    int n;
    cout<<" enter the size of array:"<<endl;
    cin>>n;
    cout<<" enter the array element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<" given me difference the number :"<<endl;
    cin>>target;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int start=0,end=n-1;
    while(start<end)
    {
        if(arr[start]*arr[end]==target)
        {
            cout<<" the element present at index "<<start<<" & "<<end;
            break;
        }
        else if(arr[start]*arr[end]>target)
        {
            end-=1;
        }
        else
        {
            start+=1;
        }
    }
    return 0;
}
    /*int find_difference=solve(arr,n,target);
    /*if(find_difference==-1)
    {
        cout<<" given difference is not present in the array:"<<endl;
    }
    else
    {
      cout<<" the given difference is present "<<endl; 
    }
    return 0;

/*}
// pair with given difference
/*int pairsum(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (arr[end] - arr[start] == target)
        {
            return 1;
        }
        else if (arr[end] - arr[start] > target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return 0;
}
int main()
{
    int arr[100];
    int n;
    cout << " enter the size of array :" << endl;
    cin >> n;
    cout << " enter the array element :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[1], arr[i + 1]);
        }
    }
    int target;
    cout << " what you wont:" << endl;
    cin >> target;

    int exist = pairsum(arr, n, target);
    if (exist == 1)
    {
        cout << " the pair of difference  exist in given array :" << endl;
    }
    else
    {
        cout << " the  pair of difference does not exist in given array:" << endl;
    }
}
// this is the elemination method
// 1  2   4  6   18   25
// target 10
// fir of all you have to sort an array :
/*int pairsum(int arr[],int n,int target )
{
    int start=0,end=n-1;
    while(start<end)
    {
        if(arr[start]+arr[end]==target)
        {
            return 1;
        }
        else if(arr[start]+arr[end]<target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return 0;
}
int main()
{
     int arr[100];
    int n;
    cout<<" enter the size of array :"<<endl;
    cin>>n;
    cout<<" enter the array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<" what you wont:"<<endl;
    cin>>target;
    int exist=pairsum(arr,n,target);
    if(exist==1)
    {
        cout<<" the pair of sum exist in given array :"<<endl;
    }
    else
    {
    cout<<" the pair of sum does not exist in given array:"<<endl;
    }
}*/
/*int main()
{

    int arr[100];
    int n;
    cout<<" enter the size of array :"<<endl;
    cin>>n;
    cout<<" enter the array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<" what you wont:"<<endl;
    cin>>key;
    int aman=0;
    for(int i=0;i<n-1;i++)
    {
       int start=i+1;
        int end=n-1;

        int x=key-arr[i];
        while(start<=end)
        {
          int mid=(start+end)/2;
          if(arr[mid]==x)
          {
            cout<<" the sum of the key is present at ->"<<i<<" & "<<mid;
            aman=1;
            break;
          }
          else
          {
          if(arr[mid]<x)
          {
            start=mid+1;
          }
          else
          {
            end=mid-1;
          }

          }

        }

    }//time complexity=nlog(n);


      if(aman==0)
        {
            cout<<" the given key is not presesnt"<<endl;
        }
    return 0;
}*/

/*int main()
{
    int arr[100];
    int n;
    cout<<" enter the size of array :"<<endl;
    cin>>n;
    cout<<" enter the array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<" what you wont:"<<endl;
    cin>>key;
    vector<int>ans;
    int start=0,end=0;
    for(int j=0;j<n-1;j++)
    {
        start=j;
       // end=j+1;

        for(int i=j;i<n;i++)
          {
            end=i+1;
            if(arr[start]+arr[end]==key)
            {
            cout<<"the key is present at index"<<start<<" & "<<end;
            break;
            }

          }
    }


    return 0;
}*/