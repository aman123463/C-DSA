#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<" enter the size of array :"<<endl;
    cin>>n;
    cout<<" enter the array elementfrom 1 to N :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        arr[i]--;
    }
    for(int i=0;i<n;i++)
    {
        arr[arr[i]%n]+=n;
    }
    
    for(int i=0;i<n;i++)
    {
       if(arr[i]/n==2)
       {
        cout<<" repeating element is "<<i+1;
        
       } 
       else if(arr[i]/n==0)
       {
        cout<<" missing element is :"<<i+1<<endl;
       }
    }
    
    return 0;
}
/*int main()
{
    int arr[100];
    int n;
    cout<<" enter the size of array :"<<endl;
    cin>>n;
    cout<<" enter array element :"<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        arr[i]--;
    }
    vector<int>count(n,0);
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    
    //find missing element
    //also repeating element 
    for(int i=0;i<n;i++)
    {
        if(count[i]==0)
        {
            cout<<" missing element is :"<<i+1<<endl;
        }
        else if(count[i]==2)
        {
            cout<<" repeating element is "<<i+1<<endl;
        }
    }
    return 0;


}*/