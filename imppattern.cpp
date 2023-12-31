#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number:" << endl;
    cin >> n;
    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << "   ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << " " << col << " ";
        }
        for (int col = row - 1; col >= 1; col--)
        {
            cout << " " << col << " ";
        }
        for (int col = n - row; col >= 1; col--)
        {
            cout << "   ";
        }
        cout << endl;
    }
    cout<<endl;
    cout<<endl;
    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= n - row; col++)
        {
           // cout << col;
           cout<<" ";
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            cout << "*";
        }
        for (int col = n - row; col >= 1; col--)
        {
            //cout << col;
            cout<<" ";
        }
        cout << endl;
        /*
         *      *
         **    **
         ***  ***
         ********
         */
    }
    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << " * ";
        }
        for (int col = 1; col <= (n - row) * 2; col++)
        {
            cout << " . ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << " * ";
        }
        for (int col = 1; col <= (n - row) * 2; col++)
        {
            cout << " . ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout<<endl;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<" * ";
        }
        for(int col=1;col<=(n-row)*2;col++)
        {
            //cout<<" . ";
            cout<<"   ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<" * ";
        }
        cout<<endl;

    }
    for(int row=1;row<=(n-1);row++)
    {
        for(int col=(n-1);col>=row;col--)
        {
            cout<<" * ";
        }
        for(int col=1;col<=2*row;col++)
        {
           // cout<<" . ";
            cout<<"   ";
        }
        for(int col=1;col<=(n-row);col++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=(n-row);col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"*"<<" ";
        }
        for(int col=1;col<=(n-row);col++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    for(int row=1;row<=(n-1);row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=(n-row);col++)
        {
            cout<<"*"<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<" ";
        }
        cout<<endl;
    }


    return 0;
};