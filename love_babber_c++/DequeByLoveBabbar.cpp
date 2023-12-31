#include<iostream>
#include<deque>
using namespace std;
int main()
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
}
