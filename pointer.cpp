#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    int* b=&a;
    int** c=&b;

    //addresh of operator-->  &:
    cout<<"the addresh of a is "<<&a<<endl;
    cout<<"the addresh of a is "<<b<<endl;
    cout<<"the addresh of b is "<<&b<<endl;
    cout<<"the addresh osf b is "<<c<<endl;
    //dereference operator--> *
    cout<<"the value at add b is "<<*b<<endl;

   cout<<"the value at add c is"<<*c<<endl;
   cout<<"the value at add value at(value at add(c)is)is "<<**c; 
    return 0;


    //pointer to pointer -->   (**)

}    
