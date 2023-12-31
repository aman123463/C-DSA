#include<iostream>
using namespace std;
class Queue
{
    private:
    int *arr;
    int front;
    int rear; 
    int size;
    public:
    Queue(int n)
    {
        this->size=n;
        arr=new int[size];
        front=0;
        rear=0;
    }
    void enqueue(int data)
    {
        if(rear==size)
        {
          cout<<" overflow condition:"<<endl;
        }
        else
        {
          arr[rear++]=data;
        }
    }
    void dequeue()
    {
        if(front==rear)
        {
            cout<<" underflow condition :"<<endl;
        }
        else
        {
            int element=arr[front];
            arr[front++]=-1;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
            cout<<" the dequeue element is :->"<<element<<endl;
        }
    }
    void findfront()
    {
        if(front==rear)
        {
            cout<<" underflow condition: "<<endl;
        }
        else
        {
           cout<<" the front element is :"<< arr[front]<<endl;
        }
    }
    void empty()
    {
        if(front==rear)
        {
            cout<<" queue is empty:"<<endl;
        }
        else
        {
            cout<<" queue is not empty:"<<endl;
        }
    }
};
int main()
{
  Queue obj(9);
  obj.enqueue(56);
  obj.findfront();
  return 0;
}