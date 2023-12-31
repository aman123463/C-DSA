#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divideIn_subarray(vector<int>arr)
{
    int total_sum=0, prev_sum=0, next_sum=0, n=arr.size();
   for(int i=0;i<n;i++)
   {
    total_sum+=arr[i];
   } 
   for(int i=0;i<n;i++)
   {
    prev_sum=arr[i];
    next_sum=total_sum-prev_sum;
    if(next_sum== prev_sum)
    {
        return 1;
    }
   }
   return 0;
}
int main()
{
    int n;
    cout<<" enter the size:"<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<" enter the element: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<endl<<divideIn_subarray(v);

    return 0;
}
//best case time complexity->o(n);
/*int main()
{
    int n;
    cout << " enter size:" << endl;
    cin >> n;
    int arr[1000];
    cout << " enter the array element " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int Total_Sum= 0;
    for (int i = 0; i < n ; i++)
    {
        Total_Sum+=arr[i];
    }
    int count=0;
    int Prev_Sum=0;
    for (int i = 0; i < n-1 ; i++)
    {
           Prev_Sum+=arr[i];
        int Next_Sum=Total_Sum-Prev_Sum;
        if( Prev_Sum==Next_Sum)
        {
            cout<<"divide in two subarray with equal is possible"<<endl;
            count=1;
            break;
        }
    }
    if(count==0)
    {
        cout<<" not possible:"<<endl;
    }
    return 0;

}*/
// time complecity-> o(n^2);
/*int main()
{
    int n;
    cout<<" enter size:"<<endl;
    cin>>n;
    int arr[1000];
    cout<<" enter the array element "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        int sum1=0,sum2=0;
        for(int j=0;j<=i;j++)
        {
            sum1+=arr[i];
        }
        for(int j=i+1;j<n;j++)
        {
            sum2+=arr[i];
        }
        if(sum1==sum2)
        {
            cout<<" divide in two subarray with equal is possible"<<endl;
            count=1;
            break;
        }
    }
    if(count==0)
    {
        cout<<" not possible:"<<endl;
    }
    return 0;
}*/
