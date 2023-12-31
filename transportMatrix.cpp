#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cout<<" enter row and column size :"<<endl;
    cin>>n>>m;
    int row=n;
    int col=m;
    vector<vector<int>>matrix(row,vector<int>(col));
    cout<<" enter element :"<<endl;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<" befor the transpose matrix is :"<<endl;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            cout<<matrix[i][j]<<"   ";
        }cout<<endl;
    }
    //after the transpose matrix is 
    for(int i=0;i<row-1;i++)
    {
        for(int j=i+1;j<col;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    cout<<" after the transpose matrix is :"<<endl;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            cout<<matrix[i][j]<<"   ";
        }cout<<endl;
    }

    /*vector<vector<int>>ans=matrix;
    //after transpose 
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            ans[j][i]=matrix[i][j];
        }
    }
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            cout<<ans[i][j]<<"   ";
        }cout<<endl;
    }*/

    return 0;

    
}