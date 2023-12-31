// BINARY SEARCH IN 2D ARRAY

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cout << " enter the number of row(n)=?  &  number of coloum (m)=? you wont: ->" << endl;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int x;
    cout << " enter what element you went to find in given 2d vector :" << endl;
    cin >> x;
    cout << endl;
    int present = 0;
    int start = 0;
    int end = n * m - 1;
    while (start <= end)
    {
        int mid = start + (end-start) / 2;
        int r_i = mid / m;
        int c_i = mid % m;
        if (matrix[r_i][c_i] == x)
        {
            cout << " element present at row-> " << r_i << " & col-> " << c_i << endl;
            int present = 1;
        }
        else if (matrix[r_i][c_i] > x)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
        if (present == 0)
        {
            cout << " element is not present in the given index :" << endl;
        }
        return 0;
    }
    /*cout<<" its a broteforce apporoch"<<endl;
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             if(matrix[i][j]==x)
             {
                 cout<<" given element present at row ->"<<i<<" & and coloum-> "<<j<<endl;
             }
         }
     }*/
    /* cout<<" now find the element using binary search :"<<endl;
     int present=0;
     for( int i=0;i<n;i++)
     {

         if(matrix[i][0]<=x&&x<=matrix[i][m-1])
         {
             int start=0,end=m-1;
             while(start<=end)
             {
               int mid=start+(end-start)/2;
               if(matrix[i][mid]==x)
               {
                 cout<<"element present at index ->row "<<i<<" and column ->"<<mid<<endl;
                 int present =1;
               }
               else if(matrix[i][mid]>x)
               {
                 end--;
               }
               else
               {
                 start++;
               }
             }
         }
     }
     if(present==0)
     {
       cout<<" element is not present in the given index :"<<endl;
     }
     return 0;
 }*/
