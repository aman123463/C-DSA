#include<iostream>
using namespace std;
/*int noofstare(int n)
{ 
    //base cas
    if(n<0)
    return 0;
    else if(n==0)
    return 1;
    else  
    return noofstare(n-1)+noofstare(n-2); //r.r7
}
int main()
{
    int n;
    cout<<"enter the number of stare "<<endl;
    cin>>n;
    cout<<endl;
    int p=noofstare(n);
    cout<<p<<endl;
    return 0;
}*/
/*void reversearray(int *arr, int size)
{
    int start=0;
    int end=size-1;
    while(start<=size)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<endl;
}

void printarray(int *arr,int size)
{
   for(int i=0;i<size;i++)
   {
    cout<<arr[i]<<" ";
   } 
   cout<<"it is my orignal array number "<<endl;
}
int main()
{
    int arr[4]={1,2,3,4};
    int brr[7]={1,2,3,4,5,6,7};
    printarray(arr,4);
    cout<<endl;
    printarray(brr,7);
    cout<<endl;
    reversearray(arr,4);
    cout<<endl;
    reversearray(brr,7);
    cout<<endl;
    printarray(arr,4);
    cout<<endl;
    printarray(brr,7);
    cout<<endl;
    return 0;

}   
    /*for(int i=3;i>=0;i--)
    {
        // int changearr[4];
        // for(int j=0;i<4;j++)
        // {
        //  changearr[j]=arr[i];
        //  cout<<changearr[j]<<endl;
        //  break;
        // }
       cout<<arr[i]<<endl;
    }
    return 0;
    
}    
    /*char ch='a';
    char *p="gwsfd";
    cout<<p<<endl;
    return 0;*/
    /*int a;
    cout<<"enter what you wont to find:"<<endl;
    cin>>a;
    cout<<endl;
    int arr[10]={2,3,6,7,9,5,0,1,4};
    for(int i=0;i<10;i++)
    {
        if(arr[i]==a)
        {
            cout<<"yes hamne find kar liya :"<<endl;
        }
    }
    cout<<"sorry there is no present "<<a<<" "<<endl;

    return 0;
}*/
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swaparray(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {

            //swap(arr[i],arr[i+1]);

        }
    }
    cout<<endl;
}
int main()
{
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[5]={11,12,13,14,15};
    swaparray(even,8);
    printarray(even,8);
    swaparray(odd,5);
    printarray(odd,5);
    return 0;

}