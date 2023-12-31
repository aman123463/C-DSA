#include<iostream>
using namespace std;
int glo=6;//gloval variable which are initilize in outside the function :
void  sum()
{
    int a;
    
    cout<<glo<<endl;
}
int main()
{
    int glo=4;//local variable which are initilize in function : 
    sum();
    cout<<"the value of glo is : "<<glo<<endl;
    return 0;
}