#include<iostream>
using namespace std;
int Linear_Search(int *arr,int index,int n,int key)
{
    //base case 
    if(index==n)
    {
        return 0;
    }
    else if(arr[index]==key)
    {
        return index;
    }
    return Linear_Search(arr,index+1,n,key);
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int key;
    cout<<" enter value what you went to find out :"<<endl;
    cin>>key;
    int ans=Linear_Search(arr,0,n,key);
    cout<<" the key is present at index :"<<ans<<endl;
    return 0;
}