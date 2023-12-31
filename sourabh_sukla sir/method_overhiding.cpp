/*
we can acchive function overloading in only  single class 
to make function overload 
 */

#include<iostream>
using namespace std;
class A
{
 public :
 void fun()
 {
    cout<<" hi i am deriverd class :"<<endl;
 }
};
class B:public A 
{
    public :
    //error -> kyuki name match kar gya hai compiler parent class me jayega hi ni (yadi fun name ka fun hota hi ni to bo parents class me jata )
    void fun(int a)//due to early bindind yadi mene is class ke obj ke through call kiya hu oveerloaded fun ko to jis class ka obj hota hai compiler pahle bahi jata hai.
    {
     cout<<" hi i am child class :"<<endl;
    }
    void fun()//uper bala fun or niche bala fun ye dono function overloading hai
    //function hiding ->uper bala fun or child class ka fun ye fun over hiding hai
    {

    }
    /*note imp point-> yadi mene inheritance kiya hai or child class ka obj creat kar 
    ak esa fun jo ki parents class me bhi or chiled class me bhi hai bas argument me diff haioi or yaadi me ishe through obj of child class karta hu to compiler dekhega ki fun name to same hai but argument if hai jabki mene inheritance bhi kiya hai or jo fun me call karna chahte hu bo to parents class me hai but inheritance hote hua bhi bah call nahi hoga 
    reason methos overhiding or name of fun same hona to bo sochega ki argument me hi galti hai user galat inputs diya hai */
};
int main()
{
    B obj;
    obj.fun();
    return 0;
}