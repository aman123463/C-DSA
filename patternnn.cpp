#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<endl;
    int row=1;
    while(row<=n)
    {
        int col=1;
        int value=1;

        while(col<=row)
        {
            cout<<row;
            row++;
            col++;
            
        }
        cout<<endl;
        row++;
    }

}