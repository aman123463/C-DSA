#include<iostream>
using namespace std;
int main()
{
    int i=6;
    int &j=i;
    cout<<&i<<endl;
    cout<<&j<<endl;
    cout<<"the value of j ia :-"<<j<<endl;
    

    return 0;
}