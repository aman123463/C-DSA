#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<" enter the size of array(less then 1000):"<<endl;
    cin>>n;
    int arr[n];
    int ans=0;
    
    if(n>=1000||n<=-1)
    {
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=1000||arr[i]<=-1)
        {
            arr[i]=0;
        }
        else
        {
            ans=ans+arr[i];
            
        }
    }
    cout<<" the total of the given number is :->"<<ans<<endl;
    return 0;
};


/*program of binary search in sorted array: 
#define n 5
    int arr[n];
    int ch;
    int count=0;
    int search;
    
    cout<<" enter array element "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<" enter how element you went to search :"<<endl;
    cin>>search;
    cout<<endl;
    for (int j = 0; j < n ;j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                ch = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = ch;
            }
            else
            {
                if(arr[i]==arr[i+1])
                {
                cout << endl<< "jay shree ram" << endl<<endl;
                count++;
                }
                     
            }
        }
    }
    cout<<" the number of jay shree ram is :"<<count<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==search)
        {
            cout<<" the given searching element is present at "<<i<<" th index of array is ->"<<search <<endl;
        }
    }

    return 0;
}*/