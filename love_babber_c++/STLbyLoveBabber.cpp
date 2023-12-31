#include <iostream>
#include <queue>
#include <stack>
#include <list>
#include <deque>
#include <vector>
#include<algorithm>
#include <array>
using namespace std;
int main()
{
    int n,m;
    cout<<" enter how many row or column you went in your prrogram :"<<endl;
    cin>>n>>m;
    cout<<endl;
    int rows=n;
    int col=m;
    //creat  2D vector 
    vector<vector<int>>matrix(rows,vector<int>(col,34));
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
           cout<<matrix[i][j]<<"  ";
        }cout<<endl;
    }
    cout<<endl;

    cout<<"it will return how many row in the given matrix "<<matrix.size()<<endl;
  
    cout<<"it will print how many column  in the given 2d vector-> "<<matrix[0].size()<<endl;
    

}
/*int main()
{
    queue<string> q;
    stack<string> s;
    q.push("aman");
    q.push("krishna");
    q.push("mayank");
    q.push("papa");
    q.push("mummy");
    q.push("swati");
    cout << " size of stack ->" << q.size() << endl;
    cout<<" first element is ->"<<q.front()<<endl;
    q.pop();
    cout<<"after pop operation ->first element is ->"<<q.front()<<endl;
    cout<<" back element is ->"<<q.back()<<endl;
    return 0;
}*/

/*int main()
{
  //  it is all about stack

 stack<string>s;
 s.push("aman");
 s.push("krishna");
 s.push("mayank");
 s.push("papa");
 s.push("mummy");
 s.push("swati");
 cout<<" size of stack ->"<<s.size()<<endl;
 cout<<" top eleement is ->"<<s.top()<<endl;
 s.pop();
 cout<<" the top element is ->"<<s.top()<<endl;
//we can not use this traversing
 /*for(int i:s)
 {
    cout<<i<<"  ";
 }*/
/*return 0;
}*/

    /*int main()
    {
        //list ki implimentation basically Doublly link list ki bajah se hoti he
        //doubly linked list means 2 pointer *front & *back
        //random axcess is not possible in case of list we need to travers one by one to reach that element
        //we can use some operation like
        // front(),back(),erase(),empty(),push_back(),push_front(),pop_back(),pop_front();

        //creation of a list
        list<int>l;
        list<int>m(5,100);
        l.push_back(1);
        l.push_front(2);
        l.push_back(4);
        //print list elementn
        for(int i:l)
        {
            cout<<i<<"   ";
        }cout<<endl;
        l.erase(l.begin());
        for(int i:m)
        {
            cout<<i<<"   ";
        }cout<<endl;
        cout<<" size of list is ->"<<l.size()<<endl;
        return 0;
    }*/
    /*int main()
    {
    deque<int>d;
    //we can inser a element from  front side as well as back sides
    d.push_front(3);
    d.push_back(1);
    d.push_front(2);
    //d.pop_back();//pop_back() means last element will be pop out in the deque
    d.pop_front();//pop_front means front element will be pop out
    for(int i:d)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
    cout<<"element at 2nd index is ->"<<d.at(1)<<endl;
    cout<<d.empty()<<endl;
    cout<<" front element is ->"<<d.front()<<endl;
    cout<<" back  element is ->"<<d.back()<<endl;
    cout<<" before erase call ->"<<endl;
    for(int i:d)
    {
        cout<<i<<"  ";
    }
    cout<<"after erase call"<<endl;
    d.erase(d.begin(),d.begin()+2);
    for(int i:d)
    {
        cout<<i<<"  ";
    }
    //max size ->means deque ko jitni memory erase karne ke pahle assign hogai bo abhi bhi rahegi
    //yadi app erase fun ko call kar rahe he to kebal element gayb hounge na ki baki block bane rahenge
    return 0;
    }*/

    /*
    //complete vector knowledge


    int main()
    {
    vector<int>v={1,2};
    v.push_back(3);
    v.push_back(3);
    v.push_back(10);
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // in the case of vector push and pop operation work as a stack
    v.pop_back();//it's bacically pop out the last index element


    cout<<" size of the vector->"<<v.size()<<endl;
    cout<<"capacity in the vector is :"<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<" front element is ->"<<v.front()<<endl;
    cout<<" last element is ->"<<v.back()<<endl;
    cout<<" element at 2nd index is->"<<v.at(2)<<endl;
    cout<<" vector is empty or not ->"<<v.empty();
    v.clear();
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<" vector is empty or not ->"<<v.empty();
    return 0;
    }*/
    // all about array

    /*array<int,4>a;
    int size=a.size();
    cout<<" enter array element :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<" element at 2nd index is ->"<<a.at(2)<<endl;
    cout<<" cheak empty or not ->"<<a.empty()<<endl;
    //we can also find out front and last element
    cout<<" the first element of the array is ->"<<a.front()<<endl;
    cout<<" the last element of the array is ->"<<a.back()<<endl;
     return 0;
    }*/