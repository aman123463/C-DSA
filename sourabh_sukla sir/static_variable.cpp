#include <iostream>
using namespace std;
// static local variable
/*
*concept as it is taken from c .
*they are bydefault initialized to value 0 .
*their lifetime is throughout the program .

void fun()
{
    static int x;//ak baar hi memory allocate hogi or throughout the program chalegi chahe is fun ko call kiya jaye ya nahi
           int y;//jab jab ishe call kiya jayega tab tak is variable ke liye memory allocate hogi after compiler move out from those fun then memory disallocate ho jayegi
}*/

// static member variable
/*
 *declear inside the class body
 *also known as class member variable
 *they must be defined outside the class
 *static member variable does not belongs to any obj, but belongs to the whole class.
 *there will be  only one copy of static member variable for the whole class.
 they can also be used with
 */
// static variable tab bhi exist karega yadi ham kisis class ka variable na bhi banaye k
class Account
{
private:
    long long balance; // instance member variable
    static float roi;  // static or class  member variable
public:
    void setbalance(long long b)
    {
        balance = b;
    }
    void getbalance()
    {
        cout << " balance in my account is :" << balance << endl;
    }
    /*
    *static member function
    *they  are qualified with the static keyword 
    *they are also called class member fun
    *they  can be invoked with or without obj
    *they can only access static member of the class 
    */
    static void setroi(float b) // static memer fun kebal static variable ko hi exis kar sakte hai ye bina obj ke bhi call ho sakte hai
    // chuki ye instance member fun  hai to ise call karne ke liye obj ki jarurat padegi
    {
        roi = b;
    }

    static void getroi()
    {
        cout << " rate of interest is :" << roi << endl;
    }
};
float Account::roi; // yadi aap nahi rakna chahte to bydefault 0 assign hoga //defination dena jaruri hai outside the class barna memmory nahi milti hai static variable ko
int main()
{

    Account a1, a2; // yadi app ak se jyada obj banate ho tab bhi ak hi baar static class variable banega
    // is obj ke ander ak hi variable hoga balance || static member variable obj ka part nahi hota hai
    // iska mat
    cout << sizeof(a1) << endl;
    a1.setbalance(832435322345); // long long variable ke karan 8 byte memory declare ho rahi hai
    a1.getbalance();
    cout << sizeof(a2) << endl;
    // a1.setroi(3.24f);
    Account::setroi(8.36F);

    Account::getroi(); // excess karne ka tarika
}