#include <iostream>
using namespace std;
#define n 5
int queue[n];
int front = -1;
int rear = -1;
void enqueue(int x)

{
    if (rear == n - 1)
    {
        cout << " overflow condition :" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
     cout<<" underflow condition :"<<endl;   
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
      cout<<endl<<" the dequeue data is "<<queue[front]<<endl;  
      front++;
    }
}
void display()
{
 if(front==-1&&rear==-1)
 {
    cout<<" underflow condition :"<<endl;
 }
 else
 {
    for(int i=front;i<=rear;i++)
    {
       cout<<queue[i]<<" "; 
    }
 }

}
void peek()
{
    if(front==-1&&rear==-1)
    {
        cout<<" underflow condition :"<<endl;
    }
    else
    {
      cout<<queue[front]<<endl;  
    }
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(90);
    peek();
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    peek();
    peek();


}