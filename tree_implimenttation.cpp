#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* builttree(node* root)
{
    cout<<" enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"enter data for insdrting left of "<<data<<endl;
    root->left=builttree(root->left);
    cout<<" enter data for inserting in right "<<data<<endl;
    root->right=builttree(root->right);
    return root;
}
int main()
{
    node* root=NULL;
    cout<<&root<<endl;
    root=builttree(root);
    cout<<&root<<endl;
}

