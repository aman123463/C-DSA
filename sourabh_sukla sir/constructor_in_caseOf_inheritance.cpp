/*inheratance ke case me construtor ke call hone ka steps from child to parents 
but chalne ka steps from parents to child */


/*
..we know that constructor is implicitly invoked when an obj is created 
.. in inheritance ,when we creat obj of derived class ,what will  happen?
*/
#include<iostream>
using namespace std ;
class A 
{
    private :
    int a;

  protected:
  A(int f)
  {
    this->a=f;
    cout<<" hi i am parents class : hare data variable value is :"<<this->a<<endl;
  }
};
class B:protected A{
    int a;
    public:
B(int s,int f):A(f)
{
    this->a=s;
    cout<<" hi i am child class : the value  is "<<this->a<<endl;
}
};
class c:public B{

};

int main()
{
 B obj(2,3);
    return 0;
}