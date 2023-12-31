#include<iostream>
using namespace std;
//about  frined function 
/*
friend function ko ham private ya public kahi bhi define kar sakte hai
kyuki friend fun is not a member fun of a class  
*/ 
//application of a friend function 
/*
Unique behaviour 
friend function can become friend to more then one class ->yadi me chahta hu ki me me ak se jyada class ke private member ko excess kar pau to ye kam me friend function ki sahayta se easily kar sakte hu jabki
ye kam member fun bhi ni kar sakte hai 
*/
//friend function by my sir g.com
//lecture 5
class complex 
{
    int a;
    int b;
    public :
    void setdata(int x,int y)
    {
        this->a=x;
        this->b=y;
    }
    void getdata()
    {
        cout<<" the value of a is ->"<<a<<" and the value of b is ->"<<b<<endl;
    }
    friend ostream& operator<<(ostream&,complex);
    friend istream& operator>>(istream&,complex);
};
ostream& operator<<(istream  &dout,complex c)
{
    cout<<" entered value is -> a="<<c.a<<" entered value b is ->"<<c.b<<endl;
    return dout;
}
istream& operator>>(istream  &din,complex c)
{
   cin>>c.a>>c.b;
   return din; 
}
int main()
{
    complex c1;
    cout<<" enter a complex number :";
    operator>>(cin,c1);
    cout<<" you entered :";
    operator<<(cout,c1);

    return 0;

}
//friend function by my sir g.com
//lecture 4 
/*class complex 
{
    int a;
    int b;
    public :
    void setdata(int x,int y)
    {
        this->a=x;
        this->b=y;
    }
    void getdata()
    {
        cout<<" the value of a is ->"<<a<<" and the value of b is ->"<<b<<endl;
    }
     friend complex operator-(complex);*/
     /*{
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
     }*/
//};
//complex operator-(complex c)
/*{
    complex temp;
    temp.a=-c.a;
    temp.b=-c.b;
    return temp;
} 
 
int main()
{
    complex c1,c2;
    c1.setdata(3,4);
    c2=-c1;//in case of friend fun -> -operator fun call hua c1 as an argument pass hua 
    //but in case of member fun or operator overloading ->c1 colar obj ne operator - ko call kiya with 0 argument 
    c2.getdata();
    c1.getdata();/*the value of a is ->-3 and the value of b is ->-4
 the value of a is ->3 and the value of b is ->4
 this ouput shows that kisi bhi class ke ham ak se jyada obj banate hai to  har ak obj ko alag alag memory initiate hoti hai 
    */
    //return 0;//c2=c1.operator-();
//}
//Lecture 3
/*class complex 
{
    int a;
    int b;
    public :
    void setdata(int x,int y)
    {
        this->a=x;
        this->b=y;
    }
    void getdata()
    {
        cout<<" the value of a is ->"<<a<<" and the value of b is ->"<<b<<endl;
    }
    friend complex operator+(complex,complex);
    /*{
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;

    }
};
 complex operator+(complex X,complex Y)
    {
        complex temp;
        temp.a=X.a+Y.a;
        temp.b=X.b+Y.b;
        return temp;

    }
int main()
{
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=operator+(c1,c2);//c3=c2+c1;//friend fun ke case me koi coller object hi ni hota hai to hame unary operator ke case me 1 obje ,,or binary operator ke case me 2 obj as an agrument pass karna hota hai 
    //c2 coler object ne operator + fun ko call kiya  c1 obj as an argument pass hua oa then result c3 obj me assign ho gya
    //member function ke case me ak coler obj alreaby rahta hai to unary ke case me 1 bhi obj pass ni karna padta haiu or binary ke case me ak obje  
    c3.getdata();


}*/

//friend function by my sir g .com lecture 2
/*class B;
class A
{
    int x;
    public :
    void setdata(int x)
    {
        this->x=x;
    }
    void getdata()
        {
            cout<<" the value of x is:"<<x<<endl;
        }
    friend void fun(A,B);
    
};
class B
{
    int x;
    public :
    void setdata(int x)
    {
        this->x=x;
    }
    void getdata()
        {
            cout<<" the value of x is:"<<x<<endl;
        }
    friend void fun(A,B);
    

};
void fun(A obj1,B obj2)
{
    cout<<" the sum of 2 integer is ->"<<obj1.x+obj2.x<<endl;
    
}
int main()
{
    A obj1;
    B obj2;
    obj1.setdata(3);
    obj2.setdata(5);
    fun(obj1,obj2);
    return 0;
}*/