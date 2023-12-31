#include<iostream>
using namespace std;
void findSumDiagonal(int matrix[][3],int  row,int col)
{
    ////now its time for finding the sum of 1st diagonal
   int firstsum=0;
    for(int i=0;i<row;i++)
    {
        firstsum+=matrix[i][i];
    }
    cout<<" sum of first diagonal is ->"<<firstsum<<endl;
    //now its time for finding the sum of 2nd diagonal
    int secoundsum=0;
    int count=0;
    int i=0;
    int j=col-1;
    while(col>=0)
    {
        secoundsum+=matrix[i][j];//03,12,21
        cout<<" jay shree ram:"<<endl;
        count++;
        i++;
        j--;
    }
    cout<<"number of shree ram ->"<<count<<endl;
    cout<<" sum of secound diagonal is ->"<<secoundsum<<endl;
    
}

int main()
{
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    findSumDiagonal(matrix,3,3);
    return 0;
}