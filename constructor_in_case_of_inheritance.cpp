/*#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    A(int k)
    {
        a=k;
        cout<<"constructor called  :"<<a<<endl;
    }
};
class B:public A
{
  public:
  int b;
  B(int x,int y):A(5)//int tyhis example child class B is call ,then parents class ,but execute first parents class ,then child class:
    //calling child to parents But execute parents to child :
   {
    int c=x;
    int d=y; 

     cout<<"constructor 2 called  :"<<c<<" "<<d<<endl;
   }
};
int main()
{
 B obj(5,7);
 return 0;
}*/
#include<iostream>
using namespace std;
class A
{
    public:
    ~A()
    {
        cout<<"my name is aman:"<<endl;
    }
};
class B:public A
{
    public:
    ~B()
    {
        cout<<"my name is again aman :"<<endl;
    }
};
int main()
{
    B obj;
    return 0;
}