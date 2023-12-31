/*
*destructor in an instance member function of a class->means ye kabhi bhi static ni hota iye sirf obj ke liye bante hai
*the name of destructor is same as the name of class but preceded by tilde(~) symbol
*destructors can never be static .
*hestructor has no  return type .
destructure takes no arguments (no overloading is possible).
*destructor kisi bhi obj ki life me bilkul at the end chalne bala fun hota hai then iske baad obj ki memory disallocate ho jati hai 
*it is invoked implicitly when object is going to destroy.
Destructor kabhi bho obje ko destroy ni karta .destructor ka call hoga uske baad ak variable ki tarah destructor bhi destroy ho jayega but iska reason destructor ni hai
why we need Destructor.
ans-> it should be define to release resources  allocated to an obj.
for ex-> ak object hai uske ander ak pointer variable hai jo class ke bahar kis variable ko point kar raha hai yadi me obj destroy arta hu to bo jo varable hai bo ab bhi memory ne allocate hoga 
Obj               external 
var pointer--->    var resources
*/
#include <iostream>
using namespace std;

class complex
{
private:
    int x;

public:
    void setdata(int a)
    {
        this->x = a;
    }
    void showdata()
    {
        cout << " the value insert in x is :->" << x << endl;
    }

    complex()
    {
        cout << " constructor called:" << endl;
    }
    ~complex()
    {
        cout << " destructor called :" << endl;
    }
};
int main()
{
    complex obj;
    obj.setdata(9);
    obj.showdata();
    return 0;
}