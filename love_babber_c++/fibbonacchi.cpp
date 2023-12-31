#include<iostream>
using namespace std;
int fibbonachi(int n)
{
    //base case 
    if(n==0)
    {
        return 0;
    }
    else if(n==1) 
    {
        return 1;
    }
    int ans= fibbonachi(n-1)+fibbonachi(n-2);
    return ans;
}
int main()
{
    int n;
    cout<<" enter number of terms :"<<endl;
    cin>>n;
    int series=fibbonachi(n);
    cout<<series<<"   ";
}
