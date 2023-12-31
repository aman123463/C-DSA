#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout << " enter the size of array :" << endl;
    cin >> n;
    cout << " enter array element :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " now shoting code in assendin order :" << endl;
     bool swapped = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }
    cout << " print the  array in assending order:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "   ";
    }
    cout<<endl<<" now shorting code in decending order :"<<endl;
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0)
        {
            break;
        }
    }
     cout << " print the array in decending order  :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "   ";
    }

    return 0;
}
