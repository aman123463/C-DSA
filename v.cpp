#include<iostream>
using namespace std;
class aman
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        cout<<"the value of a is :"<<a<<endl;
        b=y;
        cout<<"the value of b is :"<<b<<endl;
    }
    void getdata()
    {
        cout<<"the value of a is:"<<a<<"the value of b is :"<<b<<endl;
    }
    friend aman  operator+(aman A ,aman B );
};
aman operator+(aman X,aman Y)
{
    aman temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return (temp);
}
int  main()
{
    aman c1,c2,c3,c4;       
    c1.setdata(3,7);
    c2.setdata(4,5);
    c3=operator +(c1,c2);
    c3.getdata();
    return 0;
}
