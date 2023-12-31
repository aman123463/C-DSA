#include<iostream>
using namespace std;
void reachhome(int step,int dest)
{
    cout<<"me ghar jane ke liye "<<step<<" step nial ra hu"<<endl;
    cout<<"i covered "<<step<<" step and my destiny is only  "<<dest<<" step: "<<endl;
    if(step==dest)//it is my base part:
    {
        cout<<"me ghar pahuch gya "<<endl;
        return ;
    }
    step++;//processing part:
    reachhome(step,dest);//recursion:
}
int main()
{
int step=1;
int dest=10;
reachhome(step,dest);
return 0;
}