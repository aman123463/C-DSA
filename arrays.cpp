//basic program of arrays in memory location
#include<iostream>
using namespace std;
int main()
{
   int marks[]={3,5,6,2,5};
    cout<<"these are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
    int mathmarks[5];
    mathmarks[0]=34;
    mathmarks[1]=45;
    mathmarks[2]=35;
    mathmarks[3]=67;
    mathmarks[3]=3452;
    cout<<"these are mathmarks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    mathmarks[4]=78;
    cout<<mathmarks[4]<<endl;
    cout<<mathmarks[3]<<endl;  

    cout<<"with the hel of loop to print mathmarks "<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<mathmarks[i]<<endl;
    }  
    

    cout<<"with the help of while loop to print marks"<<endl;
    int i=0;  
    while(i<5)
    {
        cout<<marks[i]<<endl;
        i++;
    }

    cout<<"do-while loop"<<endl;
    int j=0;
    do{
        cout<<marks[j]<<endl;
        j++;
    }while(j<5);
    
}
