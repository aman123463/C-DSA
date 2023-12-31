#include<iostream>
using namespace std;
/*9
5
8
12
2
3
7
4
3   7   7   7   7   7   7    the maximum difference betbeen 2 element is :7*/
int main()
{
    int n;
    cout<<" enter the size of array:"<<endl;
    cin>>n;
    int arr[1000];
    cout<<" enter the array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    int maximum=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            maximum= arr[j]-arr[i];
            maxi=max(maxi,maximum);
        }
        cout<<maxi<<"   ";
    }
    cout<<" the maximum difference betbeen 2 element is :"<<maxi<<endl;
    return 0;
}