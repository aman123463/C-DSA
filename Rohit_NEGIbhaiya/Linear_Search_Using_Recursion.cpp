#include<iostream>
using namespace std;
int Linear_Search(int *arr ,int index, int size, int key)
{
    //base case 
 if(index==size)
 {
    return -1;
 }
 else if(arr[index]==key)
 {
    return index;
 }
 return Linear_Search( arr , index+1, size, key);
}
int main()
{
    int arr[5]={1,4,3,7,0};
    int key;
    cout<<" enter value what you went to find :"<<endl;
    cin>>key;
    int ans=Linear_Search(arr,0,5,key);
    cout<<" the key is present at index :"<<ans<<endl;
    return 0;
}