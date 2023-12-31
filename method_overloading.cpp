//function overloading -relation in only one class :
//fintion hiding -realtion between two or more class :
// method overriding-relation between two or more class :
/*#include <iostream>
using namespace std;
class A
{
public:
    int i=0;
    
    
        void f1()
    {
        cout << "my name is aman prajapati" << endl;
    }
    void f1(int a)
    {
        cout << "this is my function overloading program " <<a<< endl;
    }
        // function hiding
    void f2()
    {
        cout << "i am using pc:" << endl;
    }
};
class B : public A
{
public:
//function method overriding _early binding concept:
     
    int f1()
    {
        // cout<<"my name is chaman :"<<endl;
        return 0;
    }
    // function hiding
    void f2(int s)
    {
        cout << "i am warking on my pc:" << endl;
    }
};
int main()
{
    B obj;
    A o;
    o.f1();
    o.f1(3);
    cout<<obj.f1();
    // obj.f2();it will create error :
    obj.f2(4);
    return 0;
}*/
//function overriding program
/*#include<iostream>
using namespace std;
class car
{
    public:
     void shiftgair()
     {
        cout<<"in this car include 5 gair but it is not extra ordinery:"<<endl;
     }
};
class sportcar:public car
{
    public:
     void shiftgair()
     {
        cout<<"in this car include 6 gair and no 6 gair is extra ordinery feature and its property of this car :"<<endl;
     }
};

int main()
{
   sportcar obj;
   obj.shiftgair();
  return 0;
}*/
#include<iostream>
using namespace std;
class A
{
 public :
  virtual void f1(){//early binding ko rokta he or late binding karega 
    cout<<"i"<<endl;
 }
};
class B:public A
{
    public:
     void f1()
     {
        cout<<"this is mine "<<endl;
     }

};
int main()
{ 
    //
    A* p,o1;
    B o2;
    p=&o1//in this case case pointer jisse bhi points kare bo execute hpogi
    //in this line pointer points to child calss object 
    p=&o2//in this case case pointer jisse bhi points kare bo execute hpogi
    //obj of class A contain the add of child class this is our problum 
    //virtual function :
    //we can resolve this problum by 
    //o2.f1();
    p->f1();
    return 0;
}
