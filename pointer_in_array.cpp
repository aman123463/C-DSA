#include<iostream>
using namespace std;
/*int main()
{
    /*
    ....*
    ...**
    ..***
    .****
    *****   
    int space,n,m;
    /*cout<<"enter n:"<<endl;
    cin>>n;
    cout<<endl;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            //cout<<row;
            cout<<col;
        }
        cout<<endl;
    }*/
    /*
    $$$$$
    &&&&
    &&&
    &&
    &
    
    
    

    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=5-(row-1);col++)
        {
            cout<<"&";
        }
        cout<<endl;
    }*/

    /*
    A
    AB
    ABC
    ABCD
    ABCDE
    
    for( char row='A';row<='E';row++)
    {
        for (char col='A';col<=row;col++)
        { 
          cout<<col;  
        }
        cout<<endl;
     }
     */
    int main()
{

  /*  for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=5-row;col++)
        {
            cout<<" ";
        }
        char ch='A'+row-1;
        for(char name='A';name<=ch;name++)
        {
            cout<<ch;
        }
        cout<<endl;
    }*/
    for(int row=5;row>=1;row--)
    {
        for(int col=1;col<=row-(1);col++)
        {
            cout<<".";
        }
        int ch=2*row+1;
        for(int col=0;col<ch;col++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    


    return 0;

}

