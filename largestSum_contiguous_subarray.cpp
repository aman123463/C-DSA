#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
//Kadane's Algorithum->o(n);
int main()
{
    int n;
    cout<<" enter the size of array :"<<endl;
    cin>>n;
    int arr[1000];
    cout<<" enter the array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=INT_MIN;
     int prefix=0;
    for(int i=0;i<n;i++)
    {
        prefix+=arr[i];
        maxi=max(maxi,prefix);
        if(prefix<0)
        {
            prefix=0;
        }
        cout<<maxi<<"   ";
    }
    cout<<endl<<" the sum of maximum subarray value is-> "<<maxi<<endl;
return 0;
}
    
    
    /*
    {
        int prefix=0;
        for(int j=i;j<n;j++)
        {
            prefix+=arr[j];
            maxi=max(maxi,prefix);
            
        }
    }
    cout<<" maximum subarray value is ->"<<maxi;
    return 0;
}*/