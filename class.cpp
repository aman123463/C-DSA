#include <iostream>
using namespace std;
class aman
{   
    public:
    short int a;
    aman()
    {
    cout<<sizeof(a);
    }
};
int main()
{
    aman swati;
    return 0;
}
/*class aman
{
private:
    int age;
    char health;

public:
    int getage()
    {
        return age;
    }
    void setage(int a)
    {
        age = a;
    }
    char gethealth()
    {
        return health;
    }
    void sethealth(char ch)
    {
        this->health = ch;
    }
    aman()
    {
      cout<<"constructor called :"  <<endl;
    }
    //perameterized constructor
    void print()
    {
        cout<<"this is copy constructor"<<this->age<<endl;
    }
    aman (int age)
    {
        this->age =age;
        cout<<"the age is "<<this->age<<endl;
    }
    aman (char ch)
    {
        this->health =ch;
        cout<<"the age is "<<this->health<<endl;
    }
};
int main()
{
    // static representation of the object
    //when the obj is created of that class then first of all constructor  is called 
    //perameterized constructor
    aman a(546);
    //this is the concept of copy constructor;
    aman b(a);
    b.print();
    //dynamicall peramiterized constructor
    aman *h=new aman(45);

    //aman *ptr=new aman;//dynamicall creat obj
    a.setage(20);
    a.sethealth('A');
    cout << "the age is " << a.getage() << endl;
    cout << "the health is " << a.gethealth() << endl;
    // dynamically representation of tha object
    aman *ptr = new aman;
    ptr->sethealth('H');
    cout << (*ptr).getage() << endl;
    cout << "the present health is " << ptr->gethealth() << endl;
    cout << "the present health is " << (*ptr).gethealth() << endl;
    cout << ptr->getage() << endl;

    cout << sizeof(ptr) << endl;
    cout << endl;
    return 0;
}*/