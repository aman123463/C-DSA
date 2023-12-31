#include<iostream>
using namespace std;
/*inheritace ke case me constructure ke chalne ka kram perents to child 
butse kdefault constructure nahi banate hai to compiler khud creat karta hai  constructur call hone ka kram child to parents hoti hai 
yadi ham khud .

*/
class complex 
{
  private:
  int a;
  int b;
  public:
  complex(int x,int y)
  {
    this->a=x;
    this->b=y;
  }
  complex(int x)
  {
    this->a=x;
  }
};
int main()
{
  complex c= complex(7,5);
  complex c1=(3,4);
  return 0;
}
//perametarized constructor 
/*class A
{
    int a;
  public :
  //step 2
  A(int k)
  {
    a=k;
    cout<<"value of a is->"<<a<<endl;
  }
  //step 1
  /*A()
  {

  } 
};
//rule yadi parents classb me default constructor nahi hai to  na sirf child class me constructor hamko bana hoga sath hi sath call bhi karna hoga or sath hi necessary argument bhi daalne hounge 
class B:public A{
    int b;
    public :
    B(int x,int y):A(x)
    {
     b=y;
     cout<<" value of b is ->"<<b<<endl;
    }
};
int main()
{
    B obj(2,3),obj2(3,4);
    return 0;
}*/