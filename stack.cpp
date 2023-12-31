#include <iostream>
using namespace std;
int stack[6];
int top = -1;
void push(int n)
{
    /* for (int i = 0; i < 5; i++)
     {*/
    if (top == 5)
    {
        cout << "overflow condition" << endl;
    }
    else
    {

        top++;
        stack[top] = n;
        cout << stack[top]<<endl;
    }
}
void display()
{
    for(int i=top;i>=0;i--)
    {  
    if (top == -1)
    {
        cout << "underflow condition :" << endl;
    }
    else
    {
        cout<<stack[i]<<" ";
    }
    }
}
void pop()
{
    int item;

        if (top == -1)
        {

            cout << "underflow condition" << endl;
        }
        else
        {
            item = stack[top];
            top--;
            cout << "now the top element is :" << item << endl;
        }
    
}
void peek()
{
    int item;
        if (top == -1)
        {

            cout << "underflow condition" << endl;
        }
        else
        {
            item = stack[top];
            cout << "now the top element is :" << item << endl;
        }
}

int main()
{
    int x;
    for (int i = 0; i < 6; i++)
    {
        cout << "enter  how value you  wont to insert in stack at index : "<<i<<" ";
        cin >> x;
        cout <<" ";
        push(x);
        
    }
     display();
     pop();
    peek();
    cout << stack[5] << endl;
    pop();
    display();
    return 0;
};
