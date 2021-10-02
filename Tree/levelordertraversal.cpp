#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *right;
    node *left;
};
node *root;
node* binarytree()
{
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
void levelordertraversal(node * temp)
{
     node *temp1;
    queue<node *>q;
    if(temp==NULL)
     return;
     q.push(temp);
     while(!q.empty())
     {
       temp1=q.front();
       cout<<temp1->data<<" ->";
       q.pop();
       if(temp1->left)
          q.push(temp1->left);
        if(temp1->right)
        {
            q.push(temp1->right);
        }
     }

    
}
int main()
{
    root=binarytree();
    levelordertraversal(root);
}