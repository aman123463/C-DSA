#include<iostream>
using namespace std;
int main()
{

  for (int row = 1; row <= 5; row++)
  {
    for (int col = 1; col <= 5-row; col++)
    {
      cout << "  ";
    }
    cout<<endl;
    for (int col = 1; col <= row; col++)
    {
      cout << col;
    }
    for (int col = row - 1; col >= 1; col--)
    {
      cout << col;                                                                                                                                                                                                                                                                                                
    }
   
    cout << endl;
    return 0;
  }
}
/*inline int sum(int a,int b)
{
  return a+b;
}*/
/*
class swati;
class aman
{
  private:
  int money=56;
  friend void rohit(aman,swati);
};
class swati
{
  private:
  int rup=78;
  friend void rohit(aman,swati);
};
void rohit(aman r1,swati r2)
{
  cout<<"the total ammount taken by rohit is :"<<r1.money+r2.rup<<endl;
}

int main()
{
  /*  //defination-if our function is inline , then a compiler creat a copy of the function in place of fun code :this can speed up the program execution 
    int value=sum(55,78);//calling
    cout<<value<<endl;
    aman obj1;
    swati obj2;
    rohit(obj1,obj2);
    return 0;
}*/
//if i creat our functionis inline then it will creat a copy of that code in place of function calling in such condtion it will will boost up our programing speed ;
/*inline sum(int num1,int num2)
{
  cout<<"jay shree ram"<<endl;
  return num1%num2;
  
}
int main()
{
  int a=2,b=3;
  int result=sum(a,b );
  cout<<result<<endl;
  return 0;

}*/