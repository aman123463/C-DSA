#include"iostream"
using namespace std;
//namespace ->
//namespace in cpp provide the scope for the identifires like function classes and variable 

//using keyword allows you to import an entire namespace into your program with a global scope r 
//it can be used to import a namaespace into another namespace or any program
namespace myspace 
{
    int a;
    void  f1();
    class A{
        public:
        int n;
        void fun();
    };
}

namespace ms=myspace;//hare ms is a alies name of namespace name 
//define function of namespace 
void ms :: f1()//name of namespace is liye likha kyuki compiler ye samajh hi ni payega ki ye funn f1 hai bo namesace bala hai ya koi or fun aap ne banaye hai 
{
    cout<<" hello"<<endl;
}
void ms ::A::fun()
{
    cout<<" hello fun1:"<<endl;
}
using namespace ms;//hare using is a keyword 

int main()
{
  a=5;
  cout<<" the value of a is :"<<a<<endl;
  f1();
  A obj;
  obj.fun();
  obj.n=7;
  cout<<obj.n<<endl;
  return 0;
}
