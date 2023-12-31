#include<iostream>
using namespace std;
class car
{
   private:
    int gear=5;
    public:
    void incrementgear(int value)
    {
        if(value<5)
        {
            gear++;
        }
    }

    void showgear()
    {
        cout<<" there are "<<gear<<" in my car :"<<endl;
    }
};
class sportcar:public car{//is a relation is always impliment as a public inheritance 
 public:
 void setgear()
 {
    incrementgear(3);
 }
};
int main()
{

    sportcar obj;
    obj.setgear();
    obj.showgear();
}
/*class A{
public :
int s;
void fun()
{
    cout<<" hi :"<<endl;
}
};
class B:protected  A{
    protected:
    int a;
 protected:
 void fun1()
 {
   cout<<" hi,i am B"<<endl;
 }
};
class C:private B{
    public:
void setdata(int x)
{
    this->a=x;
}
void getdata()
{
    cout<<" the value of a is "<<a<<endl;
}
};
int main()
{
    C obj;
    obj.setdata(5);
    obj.getdata();
    
    return 0;
}
*/
