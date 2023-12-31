//array decending element program
#include <iostream>
using namespace std;
int main()
{
    char arr[1000];
    int n;
    cout<<" enter the size of array:"<<endl;
    cin>>n;
    cout<<" enter array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[index])
            {
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    cout<<" decending order of given array is ->";
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

    /*int n;
    cout << " enter the array size";
    cin >> n;
    int arr[n];
    cout << " enter the array element :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << endl;
    int temp = 0;
    for (int j = 0; j < n-1; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >arr[i + 1])
            {
               // temp = arr[i];
               // arr[i] = arr[i + 1];
                //arr[i + 1] = temp;
               // swap(arr[i],arr[i+1]);

            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}*/