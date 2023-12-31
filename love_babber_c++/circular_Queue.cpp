#include<iostream>
using namespace std;
class circular_Queue
{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    circular_Queue(int sizeofarray)
    {
        size=sizeofarray;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void enqueue(int data)
    {
        if(front==0&&rear==size-1||rear==(front-1)%(size-1))//bhai overflow ki condition hai tu insert hi ni kar sakte chala ja jha se aaya tha 
        {
        cout<<" overflow condition :"<<endl;
        return ;//ok bro
        }
        else if(front==-1)//bhai start hi kiya hai insert karna rko facility provide karta hu
        {
            front=0;//=rear=0;
        }
       /* else if(rear==size-1&&front!=0)//ok cyclic nature taiyaar kar deta hu ab jo bhi element tune delete kiya tha usme bhi element  jo tu insert karna chahte hai insert kar de 
        {
           rear=0;
        }*/
        /*else
        {
            //normall condition 
            rear++;
        }*/
        rear++;
        arr[rear]=data;
        return ;
    }
    void dequeue()
    {
        int ans;
        if(front==-1)//queue hi empty ho
        {
            cout<<" underflow condition :"<<endl;
            return ;
        }
        ans=arr[front];//underflow ki condition ab ni aa sakti ab mast store karo bo element jishe front point kar raha hai or then usme -1 store kara do
        arr[front]=-1;
        if(front==rear)//ak hi element present ho
        {
           front=-1;
           rear=-1;
        }
       /* else if(front==size-1&&rear!=0)//to maintain cyclic nature 
        {
            front=0; 
        }*/
        else
        {
            front++;
        }
        cout<<"the dequeue element is :"<<ans<<endl;
        return ;
    }
    void empty()
    {

    }

};
int main()
{
  circular_Queue obj(7);
  obj.enqueue(61);
  obj.enqueue(62);
  obj.enqueue(63);
  obj.enqueue(64);
  obj.dequeue();
  obj.dequeue();
  obj.dequeue();
  obj.dequeue();
  obj.dequeue();

  return 0;
}