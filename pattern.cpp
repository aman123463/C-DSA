#include<iostream>
using namespace std;
/*int main()
{
    int n;
    cout<<"enter the vlaue of n:"<<endl;
    cin>>n;
    cout<<endl;
    int row=1;
    while(row<=n)
    {
        int coloumn =1;
        while(coloumn<=row)
        {
            cout<<coloumn+row-1;
            coloumn++;
            cout<<" ";
        }
        cout<<endl;
      row++;
    }
    int l;
    cout<<"enter the value of l"<<endl;
    cin>>l;
    cout<<endl;
    int i=1;
    while(i<=l)
    {
        int coloumn =1;
        while(coloumn <=n)
        {
            cout<<coloumn;
            coloumn++;
            cout<<" ";
        }
        cout<<endl;
        i++; 
    }
    int k;
    cout<<"enter the value of k:"<<endl;
    cin>>k;
    cout<<endl;
    int rw=1;
    while(rw<=n)
    {
        int col=1;
        int value=1;
        while(col<=rw)
        {
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<rw++;
    }
    return 0;
}
