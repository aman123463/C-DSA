#include<iostream>
#include<list>
#include<string>
using namespace std;
int main()
{

    list<int>l{1,2,3,4,5,6};
    list<string>str{"aman","chaman","jagan","mohan"};
    //use of size fun
    cout<<"total value in the list are :"<<str.size()<<endl;
    int n=l.size();
    //use of push_back()->value ko insert karega at the end of the list
     l.push_back(8);
     l.push_front(10);
     l.pop_back();
     l.pop_front();
    //as you can see  that random access in not possible in list 
   /* for(int i=0;i<n;i++)
    {
        cout<<l[i]<<" ";
    }*/
// here we can use the iterator to print the value we can use iterator 
list<int>::iterator p=l.begin();
while(p!=l.end())
{
    cout<<*p<<" ";
    p++;
}cout<<endl;
list<string >::iterator k=str.begin();
 while(k!=str.end())
 {
    cout<<*k<<" ";
    k++;
 }  
 //now we are discussing about the fun which are used in list stl 
/**sort() *size() *push_back() *push_front() *pop_back()  *pop_front()  *reverse()  *remove()  *clear()*/
}