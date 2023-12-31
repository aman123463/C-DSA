#include <iostream>
using namespace std;
int main()
{
   /* int arr[1000];
    int n;
    cout << "enter tthe size of array" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cheak = 0;
    for (int j = n - 2; j >= 0; j--)
    {
        for (int i = j; i < n; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                cheak = 1;
            }
            else
            {
                if (cheak == 0)
                {
                    // given array is already short:"<<endl;
                    break;
                }
            }
        }
    }
    cout << " the sorted array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
   // return 0;
}*/
int arr[1000];
int n;
cout << "enter tthe size of array" << endl;
cin >> n;
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
int cheak=0;
// cout << " the n-1 element of the shoting array is :->" << arr[n - 1] << endl;
for (int j = 1; j < n; j++)
{
    for (int i = j; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
        {
            swap(arr[i] , arr[i - 1]);
            cheak=1;
        }
        if(cheak==0)
    {
       // given array is already short:"<<endl;
        break;
    }
    }
}
cout << " the sorted array is " << endl;
for (int i = 0; i < n; i++)
{
    cout << arr[i] << "  ";
}
return 0;

}