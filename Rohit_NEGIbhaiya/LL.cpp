#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

public:
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(node *&head, int data);
void insertAtPossition(node *head, int data, int pos)
{
    if (pos == 1)
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }
    else{
    node *newnode = new node(data);
    node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    }
}
void insertAtTail(node *&tail, int data) // insert at tail or end
{
    // creat a new node
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}
void insertAtHead(node *&head, int data) // insert at start or head
{
    // creat newnode
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void display(node *&head) // Display the data of LL
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *node1 = new node(5);
    //cout << " the data present in the LL is :" << node1->data << endl;
    node *head = node1;
    node *tail = node1;
   /* insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtHead(head, 8);
    insertAtHead(head, 9);
    display(head);*/
    insertAtTail(tail, 6);
    insertAtTail(tail, 8);
    insertAtTail(tail, 9);
    insertAtTail(tail, 10);
    display(head);
    //insertAtPossition(head,3,1);
    insertAtHead(head, 4);
    insertAtTail(tail, 11);
    insertAtPossition(head,2,1);
   
    display(head);
    cout << " give output the data of head " << head->data << endl;
    cout << " give output the data of tail " << tail->data << endl;
    return 0;
}