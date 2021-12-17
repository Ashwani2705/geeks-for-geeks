#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node *right;
    node *left;
    int data;
};
node * root;
node *binarytree(){
    int val;
    node *newnode=new node;
    cin>>val;
    if(val==-1)
       return 0;
       newnode->data=val;
       cout<<"enter the left child of ->"<<val<<" ->";
       newnode->left=binarytree();
       cout<<"enter the right child of ->"<<val<<"->";
       newnode->right=binarytree();
       return newnode;
}
void postorder(node *temp)
{
   node* prev=new node;
   stack<node *>s;
   do{
       while(temp)
       {
           s.push(temp);
           temp=temp->left;

       }
       while(temp==NULL && !s.empty())
       {
           temp=s.top();
           if( temp->right==NULL && temp->right=prev)
           {
               cout<<temp->data;
               s.pop();
               prev=temp;
               temp=NULL;
           }
           else
           {
               temp=temp->right;
           }
       }
   }while(!s.empty());
}
int main(){
   root=binarytree();
   postorder(root);
}