#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<" enter size :"<<endl;
    cin>>n;
    vector<int>prefix(n);
    cout<<" enter the vector element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>prefix[i];
    }
    vector<int>next(n);
    next=prefix;
    prefix[0]=next[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+next[i];
    }
    cout<<" prefix sum of the given array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<prefix[i]<<" ";
    }

    return 0;
}