/* *constructor 
default constructor shallow copy karta hai;

*deep and shallow copy

*/
//shallo copy
/*#include<iostream>
#include<cstring>
using namespace std;
class hero
{
    public:
    int helth;
    char  *name;//char name[100];//good practice nahi hoti ,always heap me memory allocate karne ka try karo
    char level;
    public :
    hero()
    {
        name=new char[100];
    }
    hero(int helth,char level, char name[])
    {
        this->name=name;
        this->helth=helth;
        this->level=level;
    }
    void setname(char name[])
    {
        this->name=name;
    }
    void sethelth(int  helth)
    {
        this->helth=helth;
    }
    void setlevel(char level)
    {
        this->level=level;
    }
    // creating our own copy constructor 
    //ham ni creat karte hai to compiler by default creat kar deta hai 
   /* hero(hero& temp)
    {
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        //this->name=ch;
        cout<<"copy constructor called"<<endl;
        this->name=temp.name;
        this->helth=temp.helth;
        this->level=temp.level;
    }
    void print()
    {
        cout<<"[ name is :"<<name<<" , ";
        cout<<" helth is :"<<helth<<" , ";
        cout<<" level is :"<<level<<" ] "<<endl;

    }
};
class aman:public hero
{
   
};
int main()
{
    hero obj1;
    char name[7]="babber";
    obj1.setname(name);
    obj1.setlevel('A');
    obj1.sethelth(90);
    obj1.print();
    hero obj2(obj1);
    obj2.name[0]='W';


    /*shallo copy-default copy constructor shallo copy karta hai 
    name ="babber ";
    obj1 ke name bale variable mei address store hoga uper bale name variable ka 
    ishi tarah ham copy kar rahe hai obj1 ki sare variable ko through obj2 
    to isme bhi bydefalut name variable ka add hi aaayega 
    to yadi ham kisis bhi obj ke through value ko chage kare to change name bale variable me hi hoga 
    */
   /* shallo copy me aap ak hi memory ko axcess kar raho ho through 2 objects */
   /* is tarah ki problum ko resolve karne ke liye deep copy ka concept laya gya */
   /*deep copy mei main merory location ki copy creat ho jati hai
     to bo memory kisi 2 obj ko assign ho jayegi */
   /*obj2.print();
    obj1.print();
    return 0;
}*/
//deep copy-> deep copy me hame khud ka copy constructor creat karna hota hai 
#include<iostream>
#include<cstring>
using namespace std;
class hero
{
    public:
    int helth;
    char  *name;//char name[100];//good practice nahi hoti ,always heap me memory allocate karne ka try karo
    char level;
    public :
    hero()
    {
        name=new char[100];
    }
    hero(int helth,char level, char name[])
    {
        this->name=name;
        this->helth=helth;
        this->level=level;
    }
    void setname(char name[])
    {
        this->name=name;
    }
    void sethelth(int  helth)
    {
        this->helth=helth;
    }
    void setlevel(char level)
    {
        this->level=level;
    }
    // creating our own copy constructor 
    //ham ni creat karte hai to compiler by default creat kar deta hai 
    //deep copy ke case me ham ak entirely ak new array create kar uski value ko copy karte hai 
    hero(hero& temp)
    {
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<"copy constructor called"<<endl;
        //this->name=temp.name;
        this->helth=temp.helth;
        this->level=temp.level;
    }
    void print()
    {
        cout<<"[ name is :"<<name<<" , ";
        cout<<" helth is :"<<helth<<" , ";
        cout<<" level is :"<<level<<" ] "<<endl;

    }
};
class aman:public hero
{
   
};
int main()
{
    
    
    char name[7]="babber";
    hero obj1(70,'A',name);
    /*obj1.setname(name);
    obj1.setlevel('A');
    obj1.sethelth(90);*/
    //deep copy below
    obj1.print();
    hero obj2(obj1);
    obj1.name[0]='W';
    //hero obj2(obj1);
    obj2.print();
    obj1.print();
     obj2.print();
      //from ths line //

    return 0;
}