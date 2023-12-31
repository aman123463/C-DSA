#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<" enter size :"<<endl;
    cin>>n;
    cout<<" enter array element from 1to N:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>count(n,0);
    for(int i=0;i<n;i++)
    {
    count[arr[i]]++;
    }
    int index=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(count[i]>index)
        {
            index=i;
        }
    }
    cout<<" the max occurence of a num in given series  is "<<index<<"  & number is" <<count[index]+1<<endl;
    return 0;
}