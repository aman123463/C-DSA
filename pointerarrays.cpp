//pointers in arrays
#include<iostream>
using namespace std;
int main()
{
    int marks[5]={4,6,8,2,3};
    int* i=marks;
   /*cout<<"the value of marks[0] is:"<<*i<<endl;
    cout<<"the value of marks[0] is:"<<*(i+1)<<endl;
    cout<<"the value of marks[0] is:"<<*(i+2)<<endl;
    cout<<"the value of marks[0] is:"<<*(i+3)<<endl;
    cout<<"the value of marks[0] is:"<<*(i+4)<<endl;
    cout<<"the addresh of marks[0] is:"<<i<<endl;*/
    cout<<*(i++)<<endl;// pahle print then increament i==4 ==4 then i++->6
    cout<<*(i+2)<<endl;
    cout<<*(++i)<<endl;//6->to 8 then print 
}
