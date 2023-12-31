//print element of array in the form of wave 


#include <iostream>
#include<array>
using namespace std;
void waveArray(int arr[][4],int row,int col)
{
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << "  ";
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][j] << "  ";
            }
        }
    }
}
int main()
{
    int row, col;
    cout << " enter row & column " << endl;
    cin >> row >> col;
    int arr[row][col];
    cout<<" enter the array element :"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    waveArray(arr,row,col);
    /*cout<<" required wave form output is :->";
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << "  ";
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][j] << "  ";
            }
        }
    }*/
    return 0;
}