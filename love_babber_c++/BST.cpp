// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* builtTree(node* root){
    cout<<" enter data which you went to insert:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<" enter data which you went to insert at the left part of the root node :"<<endl;
    root->left=builtTree(root->left);
     cout<<" enter data which you went to insert at the right part of the root node :"<<endl;
    root->right=builtTree(root->right);
    return root;
}
 void levelOrderTraversal(node* root){
     queue<node*>q;
     q.push(root);
     q.push(NULL);
    while(!q.empty())
    {
       node* temp=q.front();
       q.pop();
       if(temp==NULL){
           cout<<endl;
           if(!q.empty()){
               q.push(NULL);
           }
       }
       else{
          cout<<temp->data<<" ";
          if(temp->left)
          {
              q.push(temp->left);
          }
          if(temp->right)
          {
              q.push(temp->right);
          }
       }
           
    }
    
 }
 void inOrderTraversal(node* root)
 {
     //base case
     if(root==NULL)
     {
         return ;
     }
     inOrderTraversal(root->left);
     cout<<root->data<<"  ";
     inOrderTraversal(root->right);
 }
  void preOrderTraversal(node* root)
 {
     //base case
     if(root==NULL)
     {
         return ;
     }
     cout<<root->data<<"  ";
     preOrderTraversal(root->left);
     preOrderTraversal(root->right);
 }
 void postOrderTraversal(node* root)
 {
     //base case
     if(root==NULL)
     {
         return ;
     }
     postOrderTraversal(root->left);
     postOrderTraversal(root->right);
     cout<<root->data<<"  ";
 }
 int height(node* root)
 {
    //base case 
    if(root==NULL)
    {
      return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
 }
 int find_diameter(node* root)
 {
    //base case 
    if(root==NULL)
    {
        return 0;
    }
    int op1=find_diameter(root->left);
    int op2=find_diameter(root->right);
    int op3=height(root->left)+height(root->right)+1;
    return max(op1,max(op2,op3));
 }
 pair<int , int> find_diameterFast1(node* root){
    if(root==NULL)
    {
      pair<int,int>p=make_pair(0,0);
      return p;
    }
    pair<int,int> left=find_diameterFast1(root->left);
    pair<int,int> right=find_diameterFast1(root->right);
    int op1=left.first;//op1 and op2 for diameter
    int op2=right.first;
    int op3=left.second+right.second+1;//and op3 for height
    pair<int,int>ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second)+1;
    return ans; 
 }
 int find_diameter1(node* root){
    return find_diameterFast1(root).first;
 }
int main() {
    node* root=NULL;
    root=builtTree(root);
    cout<<" the required output is :"<<endl;
    levelOrderTraversal(root);
    cout<<" inorder traversal is :"<<endl;
    inOrderTraversal(root);
    cout<<" preorder traversal is :"<<endl;
    preOrderTraversal(root);
    cout<<" postorder traversal is :"<<endl;
    postOrderTraversal(root);
    cout<<" find the height of the tree:"<<endl;
    cout<<" the height of the tree is :->"<<height(root);cout<<endl<<endl<<endl<<endl<<endl;
    cout<<" we are finding the diameter of tree ::";
    cout<<" the diameter of  the given tree structure is  ::" <<find_diameter(root)<<endl;
    cout<<endl<<endl<<endl<<endl<<endll;
    cout<<" we are finding the 2nd way to finding the  diameter of tree ::";
    cout<<" the diameter of  the given tree structure is  ::" <<find_diameter1(root)<<endl;
    return 0;
};
/*
enter data which you went to insert:
1
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
3
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
9
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
8
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
3
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
7
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
4
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
5
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
11
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
1
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
13
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
15
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
17
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
18
enter data which you went to insert at the left part of the root node :
 enter data which you went to insert:
-1
enter data which you went to insert at the right part of the root node :
 enter data which you went to insert:
-1
the required output is :
      1 
     3 5 
  9 7 11 13 
8 3 4 1 15 18 
      17 
 inorder traversal is :
8  9  3  3  4  7  1  11  1  5  17  15  13  18
preorder traversal is :
1  3  9  8  3  7  4  5  11  1  13  15  17  18  
postorder traversal is :
8  3  9  4  7  3  1  11  17  15  18  13  5  1   
find the height of the tree:
 the height of the tree is :->5