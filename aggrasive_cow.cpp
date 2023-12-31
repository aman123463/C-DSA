#include <iostream>
using namespace std;
#include<stdlib.h>
int solve(int stall[], int n, int K)
{
    int ans, start = 1, mid, end;
    int index;
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (stall[j] < stall[index])
            {
                index = j;
            }
        }
        swap(stall[i],stall[index]);
        /*int temp = stall[i];
        stall[i] = stall[index];
        stall[index] = temp;*/
    }
    
    end = stall[n - 1] ;//- stall[0];
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int count = 1;
        int pos = stall[0];
        for (int i = 0; i < n; i++)
        {
            if (pos + mid <= stall[i])
            {
                count++;
                pos = stall[i];
            }
        }
        if (count < K)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int stall[1000];
    int n;
    cout << " enter number of stall" << endl;
    cin >> n;
    cout << " enter stall pos->" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> stall[i];
    }
    int K;
    cout << " enter number of cow :" << endl;
    cin >> K;
    int maximum_possible = solve(stall, n, K);
    cout << " the minimum distance between any two of them is the maximum possible is :->" << maximum_possible << endl;
    return 0;
}