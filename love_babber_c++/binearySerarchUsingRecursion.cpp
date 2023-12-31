#include <iostream>
using namespace std;
int binarysearch(int *arr, int s, int e, int key)
{
    // base case
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else
    {
        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return (arr, s, e, key);
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    cout << " enter what value you went to find out :" << endl;
    cin >> key;
    int ans = binarysearch(arr, 0, 9, key);
    cout << " the value is present at index :" <<ans<< endl;
    return 0;
}
