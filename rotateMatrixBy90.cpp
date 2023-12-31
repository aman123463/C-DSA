#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cout << " enter row and column size :" << endl;
    cin >> n >> m;
    int row = n;
    int col = m;
    vector<vector<int>> matrix(n, vector<int>(m));
    cout << " enter element :" << endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << " befor convert  matrix into 90 degree is :" << endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << "   ";
        }
        cout << endl;
    }
   cout<<"first of all transpose the given matrix "<<endl;
    for (int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;i++)
        {
           swap(matrix[i][j],matrix[j][i]);
        }
    }
    cout<<" now swap the transpose matrix :"<<endl;
    for(int i=0;i<n;i++)
    {
       int start=0,end=n-1;
       while(start<end)
       {
        swap(matrix[i][start],matrix[i][end]);
        start++;
        end=end-1;;
       }
       cout<<endl;
    }
    cout<<" now print the rotate matrix in 90 degree: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<"  ";
        }cout<<endl;
    }
    return 0;
}
