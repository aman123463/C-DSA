#include<iostream>
using namespace std;
int main()
{
    /*int arr[1000];
    int size;
    cout<<" enter the size of array:"<<endl;
    cin>>size;
    cout<<" enter the element of array:"<<endl;
    for(int i=0;i<size;i++)
    {
     cin>>arr[i];
    }
    for(int i=size-2;i>=0;i--)
    {
    /*
    if size is 5:
    index(0-4)
    Round1-(3-0)
    Round2-(2-0)
    Round1-(1-0)
    Round2-(0-0)
    */
        /*for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }//it gives max element and insert in last index for every round and last it will not cheak in 2nd iround
        }
    }
    cout<<" the array element are ->";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
}*/
        int arr[1000];
    int size;
    cout<<" enter the size of array:"<<endl;
    cin>>size;
    cout<<" enter the element of array:"<<endl;
    for(int i=0;i<size;i++)
    {
     cin>>arr[i];
    }
    bool swapped=0;
    for(int i=size-2;i>=0;i--)
    {
    /*
    if size is 5:
    index(0-4)
    Round1-(3-0)
    Round2-(2-0)
    Round1-(1-0)
    Round2-(0-0)
    */
        for(int j=0;j<=i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=1;
            }//it gives max element and insert in last index for every round and last it will not cheak in 2nd iround
            else
            {
             if(swapped==0)
             {
            
                //best case ->theta(n);
                break;
             }
            }
        }
    }
    cout<<" the array element are ->";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }

}