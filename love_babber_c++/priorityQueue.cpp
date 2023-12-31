//****** priority QUEUE **********

//priority queue means hamne ak esa queue create kar diye heai jiska first element hamesa gretest 
//ak esa ds hai jab bhi element dala dennge ab ham jab unhe nikalna suru karenge 
//to hamare pass kebal 2 hi tarike hai 
//1 one is ->yadi ham max heap banate hai to hamesa max element hi niklega 
//2 one is ->yadi ham min heap banate hai or yadi ham featching kagenge to alwaays minimium element hi niklega 
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //jab bhi ham is type se initialize karte hai to bo base hota hai max heap ke base par 
    //meas jab bhi ham featching karenge to max element hi niklenge
    //nikalne bala element hamesa gretest hoga jitne bhi element pade hai ander  
    //way to define MAX HEAP
   priority_queue <int>maxi;
   //define the way of MIN HEAP
   //priority_queue<int,vector<int>,greater<int>mini;
   maxi.push(100);
   maxi.push(356);
   maxi.push(56);
   for(int i=0;i<maxi.size();i++)
   {
    cout<<maxi.top();
    maxi.pop();
    cout<<" the greter element is "<<maxi.top()<<endl;
   }
   }
