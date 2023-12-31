#include<iostream>
using namespace std;
int main()
{
    int arr[3][4];
    cout<<" enter row->3 & coloum->4 size array: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum=INT_MIN;
    int index;
    for(int i=0;i<3;i++)
    {
        int total=0;
        for(int j=0;j<4;j++)
        {
          total+=arr[i][j];
        }
        if(total>sum)
        {
            sum=total;
            index=i;
        }
    }
    cout<<" print row index with max sum is -> index is "<<index<<" and sum is ->"<<sum<<endl;
    return 0;

}