#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout << " enter the array size :" << endl;
    cin >> n;
    cout << " enter 0 and 1 :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0, end = n - 1;
    while (start < end)
    {

        if (arr[start] == 0)
            start++;
        else
        {
            if (arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else
            {
                end--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "   ";
    }
    return 0;
}
/*if(arr[start]==1)
{
  if(arr[start]==arr[end])
  {
    end--;
  }
}
else if(start==0)
{
    if(arr[start]==arr[end])
    {
        start++;
    }
}
else if(start==1)
{
    if(arr[start]==1&&arr[end]==0)
    {
        swap(arr[start],arr[end]);
    }
}
else
{
    end--;
}*/

