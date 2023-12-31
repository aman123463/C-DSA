/*#include<iostream>
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
        cout<<endl<<"the value of a is:"<<a<<endl<<endl<<"the value of b is :"<<b<<endl;
    }
    friend aman  operator+(aman );
};
aman operator+(aman Y)
{
    aman temp;
    temp.a=a+Y.a;
    temp.b=b+Y.b;
    return (temp);
}
int  main()
{
    aman c1,c2,c3,c4;
    c1.setdata(3,7);
    c2.setdata(4,5);
    c3=c1.operator+(c2);
    c3.getdata();
    return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

class C;

class B;
class A
{
    private:
    int a;
    public:
    void setdata(int x)
    {
        a=x;
    }

    friend void sum(A,B,c);
};
class B
{
    private:
    int b;
    public:
    void setdata (int y)
    {
        b=y;
    }
    friend void sum(A,B,C);
};
class C
{
    private:
    int c;
    public:
    friend void sum(A,B,C);
    void setdata (int z)
    {
        c=z;
    }
};
void sum(A o1, B o2,C o3)
{
    cout<<o1.a+o2.*o3.c<<endl;
}

int main()
{
    A c1;
    c1.setdata(4);
    B c2;
    c2.setdata(5);
    C c3;
    c3.setdata(2);
    sum(c1,c2,c3);
    return 0;

}*/
// lecture 4
// overloading of unary operator as a friend function
/*#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"the value of a is :"<<a<<endl<<"the value of b is :"<<b<<endl;
    }
    friend complex operator-(complex);
};
complex operator-(complex X)
    {
        complex t1;
        t1.a=-X.a;
        t1.b=-X.b;
        return (t1);
    }
int main()
{
    complex c1,c2;
    c1.setdata(3,4);
    c2=operator-(c1);
    //c2=-c1;
    c2.showdata();
    c1.showdata();
    return 0;
}*/
// overloading of insertion and extraction operator in friend function :
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void getdata()
    {
        cout<<"teh value of  a is :"<<a<<endl<<"the value of b is :"<<b<<endl;
    }
};
int main()
{
    complex c1,c2;
    
}
