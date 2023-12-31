#include<iostream>
using namespace std;

int main(){
    cout<<"Enter array side";

    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++) cin>>arr[i];
    int a=INT_MAX;
    for(int i=0;i<x;i++){
        
        if(arr[i]<a){
            a=arr[i];
        }
    }
    cout<<"Smallest is:"<<a<<endl;

}
