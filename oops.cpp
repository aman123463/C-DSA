//******compile time inheritance 
//function overloading with different type of arguments 
/*#include<iostream>
using namespace std;
class A
{
    public:
    int abc(int a,int b)
    {
        int sum =a+b;
        return sum;
    }
    double abc(double c,double d,double e)
    {
         float fun =c+d+e;
        return fun;
    }//by default arguments 
    int  abc(int c,int d,int e,int f=0,int g=0)
    {
         float fun =c+d+e+f+g;
        return fun;
    }


};
int main()
{
    A l;
    
    cout<<l.abc(5.678,4.56,56,4,79);
}*/
//*******operator overloading***********//
/*#include<iostream>
using namespace std;
class A
{
    public :
    int a;
    int b;
    public:
    void add()
    {
       int c =a+b;
       cout<<"n";
    }
    void operator+ (A obj)
    {
       int value1=this->a;
       int value2=obj.b;
       cout<<"output is  "<<value2-value1<<endl;
    }
    void operator() ()
    {
        cout<<"me bracket hu : "<<this->a <<endl; 
    }
};
int main()
{
    A obj1,obj2;
    obj1.a=6;
    obj2.b=67;
    obj1+obj2;
    obj1();
  return 0;  
}*/
//***********run time polymorphysim*******************//dynamic polymorphysim

#include<iostream>
using namespace std;
class animal
{
    public:
    void speak()
    {
        cout<<"speaking"<<endl;
    }
};
class dog:public animal{
    public:
    void speak()
    {
        cout<<"barking"<<endl;//priorty is function ko pahle milega yadi yah nahin use kar re he to class animal ke function ko mil jayegi 
    }
};
int main ()
{
    animal c;
    c.speak();
    dog o;
    o.speak();
    o.speak();

}