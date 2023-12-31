#include <iostream>
using namespace std;
//traversal or insert node at a specific possition 
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<endl;
        cout << "memory is free for node with data->" << value << endl;
    }
};

void insertNodeAt_head(node *&tail, int element, int data)
{
    // empty list case
    if (tail == NULL)
    {
        node *newnode = new node(data);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        // non-empty list
        // assuming that the element present in the list
        node *current = tail;
        while (current->data != element)
        {
            current = current->next;
        }
        // element found ->current is representing element wala node:
        node *temp = new node(data);
        temp->next = current->next;
        current->next = temp;
    }
}
void delete_node(node* &tail,int value )
{
 //empty list case 
 if(tail==NULL)
 {
    cout<<" list is empty ->please cheak :"<<endl;
    return ;
 }
 else 
 
 {
    //non empty list
    //assumin that value is present in the list :
    node* prev=tail;
    node* current=prev->next;
    while(current->data!=value)
    {
        prev=current;
        current =current->next;
    }
    //curret node reatch at specific value 
    //only node 1 is present in the list 
    prev->next=current->next;
    if(current==prev)
    {
        tail=NULL;
    }
    // greter then two node 
    else if(tail==current)
    {
        tail=prev;
    }
    current->next=NULL;
    delete current;
 }
}
void print_node(node* &tail)
{
    node *temp = tail;
    do
    {
        cout << tail->data << "  ";
        tail = tail->next;
    } while (tail != temp);
}
int main()
{
    node *tail = NULL;
    insertNodeAt_head(tail, 5, 12);
    /*insertNodeAt_head(tail, 12, 13);
    insertNodeAt_head(tail, 13, 17);
    insertNodeAt_head(tail, 12, 16);
    insertNodeAt_head(tail, 12, 19);
    print_node(tail);*/
    delete_node(tail,12);
    print_node(tail);
}