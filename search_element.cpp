#include<iostream>
using namespace std;
//reverse of an array:
int main()
{
    int size;
    int temp;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<" enter array element :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int i=0;int j=size-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    /*for(int i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-1];
        arr[size-1]=temp;
    }*/
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
//searching element in array 
/*int main()
{
    int arr[5];
    int search;
    cout<<" enter which value you wont to search :"<<endl;
    cin>>search;
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]==search)
        cout<<" the given search value "<<search<<" is present in "<<i<<" th index"<<endl;
    }
}*/