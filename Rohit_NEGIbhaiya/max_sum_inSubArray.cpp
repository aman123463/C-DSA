
//find Largest sum in contiguous subarray 
//Time complexity->O(n^2);
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int find_maxSuminSubarray(vector<int>v)
{
    int maxi=INT_MIN;
    int n=v.size();int prefix;
    for(int i=0;i<n;i++)
    {
      prefix=0;
      for(int j=i;j<n;j++)
      {
        prefix+=v[j];
        maxi=max(maxi,prefix);
      }
    }
    return maxi;
}
int main()
{
    int n;
    cout<<" enter the size of array :"<<endl;
    cin>>n;
    vector<int>vec(n);
    cout<<" enter the array element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int ans=find_maxSuminSubarray(vec);
    cout<<" the maximum sum in all the subarray of array is :"<<ans<<endl;
    return 0;
}