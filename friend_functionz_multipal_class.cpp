//frinend function program to show that friend function can access one and more class at a time: 
 #include<iostream>
using namespace std;
class B;
class A
{
  private:
  int a;
  int c;
public:
  void setdata(int x)
  {
    c=x;
    cout<<"the value of c is :"<<c<<endl;
  }
 friend void sum(A c1,B c2);
};
class B
{
private:
int b;
public:
void setdata(int y)
{
    b=y;
    cout<<"the value of b is :"<<b<<endl;
}
friend void sum(A X,B Y);
};
void sum(A X,B Y)//note _ friend function can access one or  more class of data : 
{
cout<<"the sum of c and b is :"<<X.c+Y.b<<endl;
}
int main()
{
  A c1;
  B c2;
  c1.setdata(5);
  c2.setdata(19);
  sum(c1,c2);
  return 0;
    
}
