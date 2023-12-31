#include<iostream>
using namespace std;
void mergeSort(int num1[],int m,int num2[],int n)
{
 m=m+n;
        int i=0,j=0;
        while(i<n)
        {
            if(num1[i]<=num2[j])
            {
                i++;
            }
            else
            {
                swap(num1[i],num2[j]);
                i++;
                j++;
                
            }
        }
        j=0;
        while(i<m)
        {
            num1[i]=num2[j];
            i++;
            j++;
        }
}
void printArray(int arr1[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<"  ";
    }
}
int main()
{
    int num1[6]={8,9,10,0,0,0};
    int num2[3]={11,13,16};
    mergeSort(num1,6,num2,3);
    printArray(num1,6);
    return 0;
}