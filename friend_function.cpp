#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public: 
     void setdata(int x,int y)
     {
       a=x;b=y;
     }

     void showdata()
     {
        cout<<"a is :"<<a<<" b is:  "<<b<<endl;
     }
     friend void sum(complex c );
};
void sum(complex c)
{
    cout<<"sum is "<<c.a+c.b;
}
int main()
{
    complex c1,c2;
    c1.setdata(8,2);
    c1.showdata();
    sum(c1);//(object)
    return 0;
}