#include<iostream>
#include<vector>
using  namespace std;
int main()
{
    int n;
    cout<<" enter the size of matrix:"<<endl;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    cout<<" enter the array element :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    //swap matrix from upper to lower 
    for(int j=0;j<n;j++)
    {
       int  start=0,end=n-1;
       while(start<end)
       {
        swap(matrix[start][j],matrix[end][j]);
       }
    }
    cout<<" we are print the swap matrix :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<"  ";
        }cout<<endl;
    }
    return 0;
}